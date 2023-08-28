#include "functions.h"
#include <OneWire.h>
#include"Firebase.h"
#include <OneWire.h>
#include <Wire.h>

void setup() {

  pinMode(OUTPUT_A, INPUT);
  pinMode(BUTTON, INPUT);
  pinMode(BUTTON_BACK, INPUT);
  pinMode(OUTPUT_B, INPUT);
  pinMode(LIGHT, INPUT);
  pinMode(WATER_LEVEL, INPUT);
  pinMode(TdsSensorPin, INPUT);
  pinMode(FEED_MOTOR, OUTPUT);  
  pinMode(FEED_SWITCH, INPUT);
  pinMode(ONE_WIRE_BUS,INPUT);

  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);
  ledcSetup(feedChannel, freq, resolution);
  ledcAttachPin(feedPin, feedChannel);
  ledcSetup(waterChannel, freq, resolution);
  ledcAttachPin(waterPin, waterChannel);

  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  delay(2000);
  display.clearDisplay();
  lastStateA = digitalRead(OUTPUT_A);

  ledcWrite(ledChannel, 0);
  ledcWrite(feedChannel, 0);
  ledcWrite(waterChannel, 0);
  //firebase
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  Firebase.reconnectWiFi(true);

  //Set database read timeout to 1 minute (max 15 minutes)
  Firebase.setReadTimeout(fbdo, 1000 * 60);
  //tiny, small, medium, large and unlimited.
  //Size and its write timeout e.g. tiny (1s), small (10s), medium (30s) and large (60s).
  Firebase.setwriteSizeLimit(fbdo, "tiny");
}

void loop() {
  // Send the command to get temperatures

  handleSelect();
  readSensors(5000);
  controlScreen();
  controlGPIO();
  // readTemperature();
  // controlFeed();
  // controlLight();
  // controlWaterLevel();
  oledInit(2);
  switch (menu_index) {
    case 0:
      displayMenu();
      break;
    case 1:
      displaySubMenu(currentSelectSub);
      break;
    default:
      Serial.println("No menu!!");
  }
 
}