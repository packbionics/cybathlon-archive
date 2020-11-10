#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

//sensors_event_t event;

#define RESET_PIN 13
#define X1_ORIENTATION -1
#define Y1_ORIENTATION -1
#define Z1_ORIENTATION 1
#define X2_ORIENTATION 1
#define Y2_ORIENTATION 1
#define Z2_ORIENTATION -1

Adafruit_BNO055 bno1 = Adafruit_BNO055();
Adafruit_BNO055 bno2 = Adafruit_BNO055(-2, BNO055_ADDRESS_B);


double gravX1;
double gravY1;
double gravZ1;
double gravX2;
double gravY2;
double gravZ2;

double gyroX1;
double gyroY1;
double gyroZ1;
double gyroX2;
double gyroY2;
double gyroZ2;

double magnetX1;
double magnetY1;
double magnetZ1;
double magnetX2;
double magnetY2;
double magnetZ2;

double eulX1;
double eulY1;
double eulZ1;
double eulX2;
double eulY2;
double eulZ2;

double accX1;
double accY1;
double accZ1;
double accX2;
double accY2;
double accZ2;

double linaccX1;
double linaccY1;
double linaccZ1;
double linaccX2;
double linaccY2;
double linaccZ2;

double gravAcc = 9.81;
bool was_fixed = true;

void Init_Accelerometer(void);
void Rst_Acc(void);
