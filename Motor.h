#include <stdio.h>

#define FAN_IA 4

// 정지
static void Stop() {
    softPwmWrite(FAN_IA,1000);
    printf("정지\n");
    delay(3000);
}
// 미풍
static void Weak() {
    softPwmWrite(FAN_IA,666);
    printf("미풍\n");
    delay(3000);
}

// 약풍
static void Medium() {
    softPwmWrite(FAN_IA, 333);
    printf("약풍\n");
    delay(3000);
}

// 강풍
static void Strong() {
    softPwmWrite(FAN_IA, 0);
    printf("강풍\n");
    delay(3000);  
}
