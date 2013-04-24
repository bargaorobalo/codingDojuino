const int ledTest = 13;
const int redLed = 7;
const int greenLed = 8;
const int buttonSwitch = 2;

int colorState = 0;
int buttonState = 0;

void setup() {
    pinMode(ledTest, OUTPUT);
    pinMode(redLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(buttonSwitch, INPUT);    
}

void loop() {    
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
