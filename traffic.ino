#include <Adafruit_SSD1306.h>

#define RED_LED 12
#define YELLOW_LED 14
#define GREEN_LED 27
#define BUZZER 26
#define SOUND_SENSOR 34

Adafruit_SSD1306 display(128, 64, &Wire, -1);
bool emergencyMode = false;
