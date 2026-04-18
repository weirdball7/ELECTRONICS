#include <LiquidCrystal_I2C.h>

int red_led = 6;
int green_led = 7;

// Initialize LCD screen
LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  // put your setup code here, to run once:
  // OPEN SERIAL PORT 
  Serial.begin(9600);
  // Initialize digital pin LED_BUILTIN as an output
  // We're telling the Arduino "this pin is going to send a signal"  
  pinMode(green_led, OUTPUT);  // Green LED
  pinMode(red_led, OUTPUT);  // Red LED

  lcd.init();
  lcd.backlight();

}

// RED LED IS TURNED ON 
void STOP() {
  lcd.clear();
  digitalWrite(red_led, HIGH);
  digitalWrite(green_led, LOW);
  // Serial.println("STOP!");
  lcd.setCursor(0, 0);
  lcd.print("STOP!");
}

// RED LED IS TURNED OFF AND GREEN TURNS ON  
void GO() {
  lcd.clear();
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  // Serial.println("GO!");
  lcd.setCursor(0, 1);
  lcd.print("GO!");
}

void loop() {
  // put your main code here, to run repeatedly:
  STOP();
  delay(3000);
  GO();
  delay(2300);
}

