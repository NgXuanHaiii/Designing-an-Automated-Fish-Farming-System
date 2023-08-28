#include "functions.h"

void setup() {
  pinMode(AR, INPUT);
  pinMode(OUTPUT_A, INPUT);
  pinMode(BUTTON, INPUT);
  pinMode(BUTTON_BACK, INPUT);
  pinMode(OUTPUT_B, INPUT);
  pinMode(LIGHT, INPUT);
  pinMode(WATER_LEVEL, INPUT);
  pinMode(TdsSensorPin, INPUT);
  pinMode(FEED_MOTOR, OUTPUT);  
  pinMode(FEED_SWITCH, INPUT);
  digitalWrite(FEED_MOTOR, LOW);

  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);
  ledcSetup(feedChannel, freq, resolution);
  ledcAttachPin(feedPin, feedChannel);
  // ledcSetup(waterChannel, freq, resolution);
  // ledcAttachPin(waterPin, waterChannel);

  Serial.begin(115200);
  sensors.begin();
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
  delay(2000);
  display.clearDisplay();
  lastStateA = digitalRead(OUTPUT_A);

  ledcWrite(ledChannel, 0);
  ledcWrite(feedChannel, 0);
  // ledcWrite(waterChannel, 0);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println();
  Serial.print("Connected with IP: ");
  Serial.println(WiFi.localIP());
  Serial.println();

  Serial.printf("Firebase Client v%s\n\n", FIREBASE_CLIENT_VERSION);

  /* Assign the api key (required) */
  config.api_key = API_KEY;

  /* Assign the user sign in credentials */
  auth.user.email = USER_EMAIL;
  auth.user.password = USER_PASSWORD;

  /* Assign the RTDB URL (required) */
  config.database_url = DATABASE_URL;

  
  config.token_status_callback = tokenStatusCallback; // see addons/TokenHelper.h


  Firebase.begin(&config, &auth);

  // Comment or pass false value when WiFi reconnection will control by your code or third party library
  Firebase.reconnectWiFi(true);
  
  Firebase.setDoubleDigits(5);
  
}

void loop() {
  // Send the command to get temperatures
  
  handleSelect();
  readSensors(5000);
  controlScreen();
  controlGPIO();
  // ARsensor(); 
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
  //  ard = digitalRead(AR);
  //  Serial.print("GTCB:");
  //   Serial.println(ard);
  //   Serial.printf("Set int... %s\n", Firebase.setInt(fbdo, F("/pj2-aqua/cam"), ard) ? "ok" : fbdo.errorReason().c_str());
}
