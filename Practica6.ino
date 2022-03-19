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
        cadena[i++] = Serial.read();
        delay(1);
    }
    cadena[i]=0;
    if(i>0){
        String salida;
        for(int j = 0; j < 100; j++){
            char caracter = cadena[j];
            if (caracter == 0){break;}
            salida = salida + String(caracter);
            if (caracter == char("a")){
                salida = salida + String(caracter);
            }
            if (caracter == char("e")){
                salida = salida + String(caracter);
            }
            if (caracter == char("i")){
                salida = salida + String(caracter);
            }
            if (caracter == char("o")){
                salida = salida + String(caracter);
            }
            if (caracter == char("u")){
                salida = salida + String(caracter);
            }
        }
        Serial.print(salida);
    }
}
