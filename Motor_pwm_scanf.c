#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>
#include "Motor.h"

int main (void) {
    if (wiringPiSetup() == -1) {return 1;}
    softPwmCreate(FAN_IA, 0, 1000);       

    // 무한루프
    
    while(1){
    char input;

    printf("선풍기 세기 입력(q, w, m, s) : ");
    scanf("%c", &input);
    printf("%c\n", input);
    
            if(input == 'q') {
                Stop();

            } else if(input == 'w'){
                Weak();
            } else if(input == 'm'){
                Medium();
            } else if(input == 's'){
                Strong();
            }
    }
    return 0;
    
}