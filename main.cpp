#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo servo;

#define trigpin 9
#define echopin 10
#define dissolvedoxygenpin A2
#define phpin A0
#define turbiditypin A1
#define temperaturepin A3  
#define buzzer 5
#define redpin 2   // Used for OR gate (Warning)
#define greenpin 4 // Used for OR gate (Safe)
#define servopin 6

int duration;
float distance;
float phvalue;
float turbidityvalue;
int oxyvalue;
float temperature;  

const int turbiditythreshold = 600;  
const float dothreshold = 5.0;       
const float templowthreshold = 72.0;
const float temphighthreshold = 82.0; 
const float phlowthreshold = 6.5;
const float phhighthreshold = 8.5;

void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(dissolvedoxygenpin, INPUT);
  pinMode(phpin, INPUT);
  pinMode(turbiditypin, INPUT);
  pinMode(temperaturepin, INPUT); 
  pinMode(buzzer, OUTPUT);
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  
  servo.attach(servopin); 
  servo.write(0); 

  lcd.init();
  lcd.backlight();
}

void loop() {

  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);
  distance = (duration * 0.034) / 2; 


  int oxy = analogRead(dissolvedoxygenpin);
  phvalue = analogRead(phpin) * (5.0 / 1023.0) * 3.5;
  turbidityvalue = analogRead(turbiditypin);
  temperature = (analogRead(temperaturepin) * (5.0 / 1023.0)) * 100;  
  oxyvalue = ((int)oxy) / 100;

 
  lcd.setCursor(0, 0);
  lcd.print("Lvl:");
  lcd.print((int)distance); 
  lcd.print(" D.O.:");
  lcd.print(oxyvalue); 
  
  lcd.setCursor(0, 1);
  lcd.print("pH:");

  if (phvalue >= phlowthreshold && phvalue < phhighthreshold) {
    lcd.print("SA");  // Safe
  } else {
    lcd.print("NS");  // Not Safe
  }

  lcd.setCursor(6, 1);
  lcd.print("TU:");

  if (turbidityvalue > turbiditythreshold) {
    lcd.print("HI"); 
  } else {
    lcd.print("LW");  
  }

  lcd.setCursor(12, 1);
  lcd.print("T:");
  lcd.print((int)temperature); 

  delay(500);
  lcd.clear();

  // **AND Gate Logic (Temperature & Turbidity) → Control Buzzer**
  if  ((temperature < templowthreshold || temperature > temphighthreshold) && turbidityvalue > turbiditythreshold) {
    analogWrite(buzzer, 100); // Activate buzzer when temperature in range and turbidity is high
  } else {
    analogWrite(buzzer, 0); 
  }

  // **OR Gate Logic (pH & DO) → Control Red & Green LEDs**
  if ((phvalue < phlowthreshold || phvalue > phhighthreshold) || oxyvalue < dothreshold) {
    digitalWrite(redpin, HIGH);   // Warning LED ON (Unsafe pH or DO)
    digitalWrite(greenpin, LOW);  
  } else {
    digitalWrite(redpin, LOW);   
    digitalWrite(greenpin, HIGH); 
  }

  
  if (distance < 100) {
    servo.write(0);
  } else if (distance > 150) {
    servo.write(90);
  }

  delay(1000); 
}
