#include <Arduino.h>

#define PIN_A 11
#define PIN_B 12
#define PIN_C 7
#define PIN_D 6
#define PIN_E 5
#define PIN_F 10
#define PIN_G 9
#define PIN_DOT 8

void setup() {
    pinMode(PIN_A, OUTPUT);
    pinMode(PIN_B, OUTPUT);
    pinMode(PIN_C, OUTPUT);
    pinMode(PIN_D, OUTPUT);
    pinMode(PIN_E, OUTPUT);
    pinMode(PIN_F, OUTPUT);
    pinMode(PIN_G, OUTPUT);
    pinMode(PIN_DOT, OUTPUT);
}

void lightUpNumber0() {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, HIGH);
    digitalWrite(PIN_E, HIGH);
    digitalWrite(PIN_F, HIGH);
    digitalWrite(PIN_G, LOW);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber1() {
    digitalWrite(PIN_A, LOW);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, LOW);
    digitalWrite(PIN_E, LOW);
    digitalWrite(PIN_F, LOW);
    digitalWrite(PIN_G, LOW);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber2() {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, LOW);
    digitalWrite(PIN_D, HIGH);
    digitalWrite(PIN_E, HIGH);
    digitalWrite(PIN_F, LOW);
    digitalWrite(PIN_G, HIGH);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber3() {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, HIGH);
    digitalWrite(PIN_E, LOW);
    digitalWrite(PIN_F, LOW);
    digitalWrite(PIN_G, HIGH);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber4() {
    digitalWrite(PIN_A, LOW);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, LOW);
    digitalWrite(PIN_E, LOW);
    digitalWrite(PIN_F, HIGH);
    digitalWrite(PIN_G, HIGH);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber5() {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, LOW);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, HIGH);
    digitalWrite(PIN_E, LOW);
    digitalWrite(PIN_F, HIGH);
    digitalWrite(PIN_G, HIGH);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber6() {
    digitalWrite(PIN_A, LOW);
    digitalWrite(PIN_B, LOW);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, HIGH);
    digitalWrite(PIN_E, HIGH);
    digitalWrite(PIN_F, HIGH);
    digitalWrite(PIN_G, HIGH);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber7() {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, LOW);
    digitalWrite(PIN_E, LOW);
    digitalWrite(PIN_F, LOW);
    digitalWrite(PIN_G, LOW);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber8() {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, HIGH);
    digitalWrite(PIN_E, HIGH);
    digitalWrite(PIN_F, HIGH);
    digitalWrite(PIN_G, HIGH);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpNumber9() {
    digitalWrite(PIN_A, HIGH);
    digitalWrite(PIN_B, HIGH);
    digitalWrite(PIN_C, HIGH);
    digitalWrite(PIN_D, LOW);
    digitalWrite(PIN_E, LOW);
    digitalWrite(PIN_F, HIGH);
    digitalWrite(PIN_G, HIGH);
    digitalWrite(PIN_DOT, LOW);
}

void lightUpDot() {
    digitalWrite(PIN_DOT, HIGH);
}

void lightUpNumber(int number) {
    switch (number) {
        case 0:
            lightUpNumber0();
            break;
        case 1:
            lightUpNumber1();
            break;

        case 2:
            lightUpNumber2();
            break;

        case 3:
            lightUpNumber3();
            break;

        case 4:
            lightUpNumber4();
            break;

        case 5:
            lightUpNumber5();
            break;

        case 6:
            lightUpNumber6();
            break;

        case 7:
            lightUpNumber7();
            break;

        case 8:
            lightUpNumber8();
            break;

        case 9:
            lightUpNumber9();
            break;

        default:
            lightUpDot();
    }
}

void loop() {

    for (int i = 0; i < 10; ++i) {
        lightUpNumber(i);
        delay(1000);
    }

}