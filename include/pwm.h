#ifndef PWM_H
#define PWM_H
#include <Wire.h>
#include <Arduino.h>
#include <stdint.h>
#define MOTOR1 14
#define MOTOR2 25
#define MOTOR3 23
#define MOTOR4 15
#define BUZZER_PIN 18
#define BUTTON_PIN 35
#define LED1 19
#define LED2 26
extern bool buttonState;
extern bool pb_falling;
extern bool pb_rising;
void pwm_init();
void motor_control(int spped1, int speed2, int speed3, int speed4);
void buzzing(uint8_t type);
void ButtonCheck();
#endif