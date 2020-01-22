#include <wiringPi.h>
#include <stdio.h>

#define FAN_IA 4
#define FAN_IB 5

// 왼쪽으로 2초 회전
static void Left_2_Second() {
    digitalWrite(FAN_IA, HIGH);
    digitalWrite(FAN_IB, LOW);
    delay(2000);
}


// 오른쪽으로 2초 회전
static void Right_2_Second() {
    digitalWrite(FAN_IA, LOW);
    digitalWrite(FAN_IB, HIGH);
    delay(2000);
}

// 2초 멈춰서 대기
static void Wait_2_Second() {
    digitalWrite(FAN_IA, LOW);
    digitalWrite(FAN_IB, LOW);
    delay(2000);
}

int main (void) {

    if(wiringPiSetup() == -1) {return 1;}

    pinMode(FAN_IA, OUTPUT);
    pinMode(FAN_IB, OUTPUT);

    // 무한루프
    while (1) {
        Left_2_Second();
        Wait_2_Second();
        Right_2_Second();
        Wait_2_Second();
    }
    return 0;
}