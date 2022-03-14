#include <Arduino.h>

void setup(){
    Serial.begin(115200);
    delay(20);
}

void loop(){
    int i;
    char cadena[100];
    
    i=0;
    while(Serial.available()){
        s[i++] = Serial.read();
        delay(1);
    }
    s[i]=0;
}
