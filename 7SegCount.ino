#define segA 2//connecting segment A to PIN2
#define segB 3// connecting segment B to PIN3
#define segC 4// connecting segment C to PIN4
#define segD 5// connecting segment D to PIN5
#define segE 6// connecting segment E to PIN6
#define segF 7// connecting segment F to PIN7
#define segG 8// connecting segment G to PIN8
#define segH 9// Power - common pin
#define segI 10// Power - common pin

#include <Adafruit_NeoPixel.h>
 
int COUNT=0;//count integer for 0-9 increment
int switchPin = 32;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(30, 22, NEO_GRB + NEO_KHZ800);

void setup()
{
  pinMode(switchPin, INPUT);
  strip.begin();
  strip.show();
                  for (int i=2;i<11;i++)
                  {
                    pinMode(i, OUTPUT);// taking all pins from 2-8 as output
                  }
}
 
void loop()

{
  
switch (COUNT)
                {

                case 0://when count value is zero show”0” on disp
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, HIGH);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 1:// when count value is 1 show”1” on disp
                digitalWrite(segA, HIGH);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, HIGH);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 2:// when count value is 2 show”2” on disp
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, HIGH);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 3:// when count value is 3 show”3” on disp
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 4:// when count value is 4 show”4” on disp
                digitalWrite(segA, HIGH);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 5:// when count value is 5 show”5” on disp
                digitalWrite(segA, LOW);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 6:// when count value is 6 show”6” on disp
                digitalWrite(segA, LOW);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 7:// when count value is 7 show”7” on disp
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, HIGH);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 8:// when count value is 8 show”8” on disp
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                digitalWrite(segH, HIGH);
                digitalWrite(segI, HIGH);
                delay(500);
                break;
 
                case 9:// when count value is 9 show”9” on disp
                lightOn();
                strip.setBrightness(42);
                strip.show();
                nineOn();
                delay(1000);
                
                lightOff();
                strip.show();
                nineOff();
                delay(500);
                
                lightOn();
                strip.setBrightness(84);
                strip.show();
                nineOn();
                delay(1000);
                
                lightOff();
                strip.show();
                nineOff();
                delay(500);

                lightOn();
                strip.setBrightness(126);
                strip.show();
                nineOn();
                delay(1000);
                
                lightOff();
                strip.show();
                nineOff();
                delay(500);
                
                lightOn();
                strip.setBrightness(168);
                strip.show();
                nineOn();
                delay(1000);
                
                nineOff();
                lightOff();
                strip.show();
                delay(500);

                lightOn();
                strip.setBrightness(210);
                strip.show();
                nineOn();
                delay(1000);
                
                lightOff();
                strip.show();
                nineOff();
                delay(500);
                
                lightOn();
                strip.setBrightness(255);
                strip.show();
                nineOn();
                delay(1000);
                
                nineOff();
                lightOff();
                strip.show();
                
                break;
 
                break;
                }
               
                if (COUNT<10)
                {
                                COUNT++;
                                delay(1000);///increment count integer for every second
                }
                if (COUNT==10)
                { 
                  if (digitalRead(switchPin) == HIGH) { //towards board, off
                    COUNT=0;// if count integer value is equal to 10, reset it to zero.
                    delay(1000);
                  } else { //away from board, continue counting
                    digitalWrite(segA, LOW);
                    digitalWrite(segB, LOW);
                    digitalWrite(segC, LOW);
                    digitalWrite(segD, LOW);
                    digitalWrite(segE, LOW);
                    digitalWrite(segF, LOW);
                    digitalWrite(segG, LOW);
                    digitalWrite(segH, LOW);
                    digitalWrite(segI, LOW);
                    }
                }
}

void lightOn() {
  strip.setPixelColor(0, 255, 0, 0);
  strip.setPixelColor(1, 255, 0, 0);
  strip.setPixelColor(2, 255, 0, 0);
  strip.setPixelColor(3, 255, 0, 0);
  strip.setPixelColor(4, 255, 0, 0);
  strip.setPixelColor(5, 255, 0, 0);
  strip.setPixelColor(6, 255, 0, 0);
  strip.setPixelColor(7, 255, 0, 0);
  strip.setPixelColor(8, 255, 0, 0);
  strip.setPixelColor(9, 255, 0, 0);
}

void lightOff() {
  strip.setPixelColor(0, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(7, 0, 0, 0);
  strip.setPixelColor(8, 0, 0, 0);
  strip.setPixelColor(9, 0, 0, 0);
}

void nineOn() {
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segH, HIGH);
  digitalWrite(segI, HIGH);
}

void nineOff() {
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segH, LOW);
  digitalWrite(segI, LOW);
}

