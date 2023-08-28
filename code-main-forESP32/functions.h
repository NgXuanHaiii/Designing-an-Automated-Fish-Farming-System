#include "variable.h"
#include "images.h"
#include "oled.h"
#include "TDS.h"
#include "FET.h"
#include "DS18B20.h"
 

void displayWaterLevel(int value) {
  float max = 2600;
  int tempValue = (value < max) ? value : max;
  int height = 44;
  int level = map(tempValue, 0, max, 0, 48);
  int percent = float((level / float(48)) * 100);
  int startDrawWaterLevel = (height * percent) / 100;
  Serial.println("Value: ");
  Serial.print(value);
  display.clearDisplay();
  display.drawBitmap(0, 0, epd_bitmap_sub_title[3], 128, 16, WHITE);
  display.drawRect(0, 16, 64, 48, WHITE);
  display.fillRect(2, 62 - startDrawWaterLevel, 60, startDrawWaterLevel, WHITE);
  display.setCursor((128 / 2) + 12, 32);
  display.print(percent);
  display.print("%");
  display.display();
}

void displayDirtWater(int value) {
  display.clearDisplay();
  display.drawBitmap(0, 0, epd_bitmap_sub_title[1], 128, 16, WHITE);
  display.setCursor(0, 16);
  display.print("F: 0 - 70");
  display.setCursor((128 / 2) - 10, 32);
  display.print(value);
  display.print("ppm");
  display.display();
}

void displayLightValue(int light_percent) {
  display.clearDisplay();
  display.drawBitmap(0, 0, epd_bitmap_sub_title[0], 128, 16, WHITE);
  display.setCursor(50, 16);
  display.print(light_percent);
  display.println("%");
  display.drawBitmap(0, 32 + sub_item_select, epd_bitmap_select, 128, 16, WHITE);
  display.drawBitmap(0, 32, epd_bitmap_options_brightness[0], 128, 16, WHITE);
  display.drawBitmap(0, 48, epd_bitmap_options_brightness[1], 128, 16, WHITE);
  display.display();
}

void displayPump() {
  display.clearDisplay();
  display.drawBitmap(0, 0, epd_bitmap_sub_title[4], 128, 16, WHITE);
  display.drawBitmap(0, 32 + sub_item_select, epd_bitmap_select, 128, 16, WHITE);
  display.drawBitmap(0, 32, epd_bitmap_options_brightness[0], 128, 16, WHITE);
  display.drawBitmap(0, 48, epd_bitmap_options_brightness[1], 128, 16, WHITE);
  display.display();
}

void displayEatControl() {
  display.clearDisplay();
  display.drawBitmap(0, 0, epd_bitmap_sub_title[2], 128, 16, WHITE);
  display.drawBitmap(0, 32 + sub_item_select, epd_bitmap_select, 128, 16, WHITE);
  display.drawBitmap(0, 32, epd_bitmap_options_brightness[0], 128, 16, WHITE);
  display.drawBitmap(0, 48, epd_bitmap_options_brightness[1], 128, 16, WHITE);
  display.display();
}
void displayTemperature( float value) {
  display.clearDisplay();
  display.drawBitmap(0, 0, epd_bitmap_sub_title[5], 128, 16, WHITE);
  display.setCursor(0, 20);
  display.println("Temp:");
  display.setCursor(0, 40);
  display.print(value,1);
  // display.print((char)176);
  display.print("C");
  display.display();
}

void displayMenu() {
  display.clearDisplay();
  display.drawBitmap(0, 0, epd_bitmap_menu, 128, 16, WHITE);
  display.drawBitmap(0, 16, menu[item_sel_previous], 128, 16, WHITE);
  display.drawBitmap(0, 32, epd_bitmap_select, 128, 16, WHITE);
  display.drawBitmap(0, 32, menu[item_selected], 128, 16, WHITE);
  display.drawBitmap(0, 48, menu[item_sel_next], 128, 16, WHITE);
  display.display();
}

void readSensors(int delay) {
  if (millis() - delayReadSensor >= delay) {
    light = analogRead(LIGHT);
    water_level = analogRead(WATER_LEVEL);
  
    delayReadSensor = millis();
  }
  readTDS(tds);

  
}

void displaySubMenu(int item_selected) {
  switch (item_selected + 1) {
    case 1:
      displayLightValue(light_percent);
      break;
    case 2:
      displayDirtWater(tds);
      break;
    case 3:
      displayEatControl();
      break;
    case 4:
      displayWaterLevel(water_level);
      break;
    case 5:
      displayPump();
      break;
    case 6 : 
      displayTemperature(temperature_DS);
    default:
      Serial.println("No menu !!");
  }
}

void handleSelect() {
  currentStateA = digitalRead(OUTPUT_A);

  if (menu_index == 0) {
    if (currentStateA != lastStateA && currentStateA == 1) {

      // If the outputB state is different than the outputA state then
      // the encoder is rotating CCW so decrement
      if (digitalRead(OUTPUT_B) != currentStateA) {
        item_selected++;
        if (item_selected >= menu_LEN) {
          item_selected = 0;
        }
      } else {
        // Encoder is rotating CW so increment
        item_selected--;
        if (item_selected < 0) {
          item_selected = menu_LEN - 1;
        }
      }
      display.clearDisplay();
    }
    item_sel_previous = item_selected - 1;
    if (item_sel_previous < 0) { item_sel_previous = menu_LEN - 1; }
    item_sel_next = item_selected + 1;
    if (item_sel_next >= menu_LEN) { item_sel_next = 0; }
    // Remember last outputA state
    lastStateA = currentStateA;
  }
  if (menu_index == 1) {
    if (currentStateA != lastStateA && currentStateA == 1) {

      // If the outputB state is different than the outputA state then
      // the encoder is rotating CCW so decrement
      if (digitalRead(OUTPUT_B) != currentStateA) {
        sub_item_select = 16;
      } else {
        // Encoder is rotating CW so increment
        sub_item_select = 0;
      }
      display.clearDisplay();
    }
    lastStateA = currentStateA;
  }
  // Put in a slight delay to help debounce the reading
  delay(5);
}

void controlGPIO() {
  if (menu_index == 1) {
    if (digitalRead(BUTTON) == 1) {
      while (digitalRead(BUTTON) == 1) {};
      if (currentSelectSub == 0) {
        if (sub_item_select == 0) {
          ledcWrite(ledChannel, 255);
          auto_light = false;
        }

        if (sub_item_select == 16) {
          ledcWrite(ledChannel, 0);
          auto_light = true;
        }
      }

      if (currentSelectSub == 2) {
        if (sub_item_select == 0) {
          isMotorRunning = true;
          Serial.println("Feed Run");
          ledcWrite(feedChannel, 255);
        }

        if (sub_item_select == 16) {
          isMotorRunning = false;
          Serial.println("Feed Stop");
          ledcWrite(feedChannel, 0);
        }
      }

      if (currentSelectSub == 4) {
        if (sub_item_select == 0) {
          ledcWrite(waterChannel, 255);
        }

        if (sub_item_select == 16) {
          ledcWrite(waterChannel, 0);
        }
      }
    }
  }

  if (digitalRead(13) == 1) {
    if(isSwitchActive == true) {
      delay(500);
      ledcWrite(feedChannel, 0);
    }
    isSwitchActive = false;
  }

  if (digitalRead(13) == 0) {
    isSwitchActive = true;
  }

  float max = 4096;
  light_percent = float((1 - light / max) * 100);
  if (auto_light) {
    if(light_percent <= 40) {
      ledcWrite(ledChannel, 255);
    } else {
      ledcWrite(ledChannel, 0);
    }
  }
}

void controlScreen() {
  selectBtn = digitalRead(BUTTON);
  backBtn = digitalRead(BUTTON_BACK);
  if (menu_index == 0) {
    if (selectBtn == 1) {
      while (digitalRead(BUTTON) == 1) {};
      menu_index = 1;
      currentSelectSub = item_selected;
    }
  }

  if (menu_index == 1) {
    if (backBtn == 1) {
      while (digitalRead(BUTTON_BACK) == 1) {};
      menu_index = 0;
    }
  }
}
