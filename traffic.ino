#include <Adafruit_SSD1306.h>

#define RED_LED 12
#define YELLOW_LED 14
#define GREEN_LED 27
#define BUZZER 26
#define SOUND_SENSOR 34

Adafruit_SSD1306 display(128, 64, &Wire, -1);
bool emergencyMode = false;
void setup() {
  pinMode(RED_LED, OUTPUT);
pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(SOUND_SENSOR, INPUT);
 display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
}
void loop() {
  int soundLevel = analogRead(SOUND_SENSOR);

  if (soundLevel > 2000) { // Siren threshold
    emergencyMode = true;
 } else
{
emergencyMode = false;
  }
if (emergencyMode) {
    // Emergency mode
    digitalWrite(RED_LED, LOW);
 digitalWrite(YELLOW_LED, LOW);'
 digitalWrite(GREEN_LED, HIGH);  
 tone(BUZZER, 1000);
updateDisplay("🚨 EMERGENCY MODE 🚨");
delay(500);
 } else {
  // Normal traffic cycle
    noTone(BUZZER);

 // Green
    digitalWrite(GREEN_LED, HIGH);
 digitalWrite(RED_LED, LOW);
 digitalWrite(YELLOW_LED, LOW);
   updateDisplay("Green Light");
    delay(5000);
