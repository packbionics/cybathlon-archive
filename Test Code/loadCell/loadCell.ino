#include "HX711.h"
HX711 loadcell;
HX711 loadcell2;

// 1. HX711 circuit wiring
const int LOADCELL_DOUT_PIN = 2;
const int LOADCELL_DOUT_PIN2 = 4;
const int LOADCELL_SCK_PIN = 3;

// 2. Adjustment settings
const long LOADCELL_OFFSET = 50682624;
const long LOADCELL_DIVIDER = 5895655;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  loadcell.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  loadcell.set_scale(LOADCELL_DIVIDER);
  loadcell.set_offset(0);
  loadcell.set_gain();
  loadcell2.begin(LOADCELL_DOUT_PIN2, LOADCELL_SCK_PIN);
  loadcell2.set_scale(LOADCELL_DIVIDER);
  loadcell2.set_offset(0);
  loadcell2.set_gain();
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("Weight: ");
  SerialUSB.print(loadcell.read()/10000);
  SerialUSB.print(" ");
  SerialUSB.print(loadcell2.read()/10000);
  SerialUSB.println();

}
