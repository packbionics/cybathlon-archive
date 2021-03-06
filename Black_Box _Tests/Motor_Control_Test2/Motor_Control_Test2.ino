#include "LoadCell_functions.h"
#include "Encoder_functions.h"
#include "Motor_functions.h"
#include "FSM.h"
#include "Button.h"
#include "Thresholds.h"
#include "Sensor_Interrupt.h"
#include "Inner_FSMs.h"
#include "Accelerometer_functions.h"

#include <string.h>
#include <stdio.h>

//#define DEBUG_CONFIG // comment this line out to run full system
//#define CALIBRATION_CONFIG_LC // comment this line out to run full system
//#define CALIBRATION_CONFIG_ENCODER // comment this line out to run full system
//#define EXTEND_LEG // this is used to extend the leg upon startup

long tic;
long toc;
long tic2 = millis();
long toc2 = millis();
int startingPos;
int firstPos;
int triggerAngle;
int secondPos;
boolean startTest;
int pos;

char seps[] = ",";
char *token;
int var;
int input[4];
char s[100];

void setup() {
  // Initialize
  Init_Encoders();
//  Init_LC(); // Uncomment when using sensors
  Init_Motors();
  Init_Button(); 
  Init_Interrupt();
  //  Init_Accelerometer(); // Uncomment when using sensors, and also uncomment accelerometer stuff in Sensor_Interrupt
  Serial.begin(115200);
  startTest = false;

#ifdef DEBUG_CONFIG

#endif

#ifdef CALIBRATION_CONFIG_LC
  Calibrate_LC(loadcell1);
  Calibrate_LC(loadcell2);
  Calibrate_LC(loadcell3);
  Calibrate_LC(loadcell4);
#endif

#ifdef CALIBRATION_CONFIG_ENCODER
  // For calibrating encoders, we need to first
  // make sure that they are initialized at full extension
  // Then we set the encoders to 0
  delayMicroseconds(50000);
  setZeroSPI(ENC_0);
  setZeroSPI(ENC_1);
#endif

#ifdef EXTEND_LEG

#endif
  delay(1000);
  pos = encKnee;
}

void loop() {
  // input order: starting position, first position, trigger angle, second position
  if (Serial.available() > 0) {
    // Message Explaining Test Parameters
    Serial.println("___________________________________________________________________________________________________________________________________");
    Serial.println("This test applies to Motor Black Box Test(s) 4, 5a, and 5b");
    Serial.println("The purpose of the test is to see how the system responds to a quick change in movement\n");
    Serial.println("Parameters: ");
    Serial.println("Starting Position,First Position,Trigger Angle,Second Position");
    Serial.println("Angles are relative about the knee, maximum is ~115 deg and minimum is 0 deg, ex: leg straight is zero degrees");
    Serial.println("  Starting Position: Initial position (degrees) at which the leg is moved to before test movement ");
    Serial.println("  First Position: Leg begins to move from start position to first position (degrees)");
    Serial.println("  Trigger Angle: Angle (degrees) at which leg switches direction and moves towards second position");
    Serial.println("  Second position: Angle (degrees) that the leg finally moves to and comes to rest\n");
    Serial.println("What You Write In the Serial Monitor Example: ");
    Serial.println("0,60,40,20");
    Serial.println("So the leg starts out straight, is moving to 60 degrees, once it hits 40 degrees and then moves to 20 degress coming to a stop");
    
    String string = Serial.readString();
    string.toCharArray(s, 100);
    token = strtok(s, seps);
    for (int i = 0; i < 4; i++) {
      sscanf(token, "%d", &var);
      input[i] = var;
      token = strtok(NULL, seps);
    }
    startingPos = input[0];
    firstPos = input[1];
    triggerAngle = input[2];
    secondPos = input[3];
    Serial.println("___________________________________________________________________________________________________________________________________");
    Serial.print("Starting Test w/ Parameters: ");
    Serial.print(startingPos);
    Serial.print(" (Starting Position), ");
    Serial.print(firstPos);
    Serial.print(" (First Position), ");
    Serial.print(triggerAngle);
    Serial.print(" (Trigger Angle), ");
    Serial.print(secondPos);
    Serial.println(" (Second Position)");
    startTest = true;
    tic = millis();
  }
  if (startTest) {
    pos = startingPos;
    toc = millis();
    if (toc - tic > 1000) {
      pos = firstPos;
    }
    if (toc - tic > 1000 && encKnee == triggerAngle) {
      pos = secondPos;
      startTest = false;
    }
  }
  rotate(pos);
  //  if (Serial.available() > 0) {
  //    String s = Serial.readString();
  //    int s0 = s.indexOf(",");
  //    String s1 = s.substring(0,s0);
  //    String s2 = s.substring(s0+1);
  //    firstPos = s1.toInt();
  //    secondPos = s2.toInt();
  //    Serial.print(firstPos);
  //    Serial.print("\t");
  //    Serial.println(secondPos);
  //    rotate(firstPos);
  //    tic = millis();
  //  }
  //  toc = millis();
  //  if (toc-tic > 500) {
  //    rotate(secondPos);
  //  }
  toc2 = millis();
  if (toc2 - tic2 > 500) {
    Serial.print("Knee Encoder: ");
    Serial.print(encKnee);
    Serial.print("\t");
    Serial.print("CAM Encoder: ");
    Serial.println(encCAM);
    tic2 = millis();
  }
}
