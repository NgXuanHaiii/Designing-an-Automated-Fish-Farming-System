// Define input/output
#define LIGHT 34
#define WATER_LEVEL 35
#define FEED_MOTOR 14
#define FEED_SWITCH 13


#define AR 32 
#define BUTTON 15
#define BUTTON_BACK 19
#define ONE_WIRE_BUS 27


// Rotate
#define OUTPUT_A 2
#define OUTPUT_B 4

// Rotate encoder
int currentStateA;
int lastStateA;

// OLED display
int item_selected = 0; 
int item_sel_previous; 
int item_sel_next;
int sub_item_select;
int menu_index = 0;

// Control
int selectBtn;
int backBtn;
int currentSelectSub;

// Light
bool auto_light;
int light_percent;

// Feed
int currentStateMotor = 1;
bool isMotorRunning = false;
bool isSwitchActive = false;

// Sensors
int light;
int water_level;
int tds;
int temp;
int ard;
int  nhietdo;
// Delay
unsigned long delayReadSensor;

