#include "Timer.h"

const int redLed = 7;
const int greenLed = 8;
const int buttonSwitch = 2;

int colorState = 0;
int buttonState = 0;

Timer t;

void setup() {
    pinMode(redLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(buttonSwitch, INPUT);
  
    t.every(30000, timeEnded);  //1000 = 1 second
}

void loop() {  
    t.update();
    while(buttonState = digitalRead(buttonSwitch)){
        delay(300);
        if(buttonState == HIGH){
            if(colorState == 0){
                colorState = 1;
            }else{
                colorState = 0;
            }
        }
        
        if(colorState == 1){
            digitalWrite(redLed, LOW);
            digitalWrite(greenLed, HIGH);

        }else{
            digitalWrite(redLed, HIGH);
            digitalWrite(greenLed, LOW);

        }
    }
}

void timeEnded(){
    while(true){
        digitalWrite(greenLed, HIGH);
        digitalWrite(redLed, HIGH);
        delay(500);
        digitalWrite(greenLed, LOW);
        digitalWrite(redLed, LOW);
        delay(500);
    }
}
