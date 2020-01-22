#include <wiringPi.h>
#include <stdio.h>
#define SWITCH 1
#define LED 29

int main (void){
        if(wiringPiSetup()==-1){
                printf("setup wiringPi failed!");
                return 1;
        }

        pinMode(SWITCH, INPUT);
        pinMode(SWITCH, PUD_DOWN);
        pinMode(LED, OUTPUT);

        for(;;){
                if(digitalRead(SWITCH)==1){
                        digitalWrite(LED, HIGH);
                } else{
                        digitalWrite(LED, LOW);
                }
        }
        return 0;
}