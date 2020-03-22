// automatically generated by arduino-cmake
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Accelerometer_functions.ino"
#include <Arduino.h>
#include <Adafruit_MMA8451.h>
#include "Accelerometer_functions.h"

#line 7 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/cmake-build-debug/MasterSketch_Accelerometer_functions.ino.cpp"
#include "Arduino.h"

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Button.ino
 void Init_Button() ;
 void Init_Button() ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Button.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Encoder_functions.ino
 void Init_Encoders() ;
 void Init_Encoders() ;
 uint16_t getPositionSPI(uint8_t encoder, uint8_t resolution) ;
 uint16_t getPositionSPI(uint8_t encoder, uint8_t resolution) ;
 uint8_t spiWriteRead(uint8_t sendByte, uint8_t encoder, uint8_t releaseLine) ;
 uint8_t spiWriteRead(uint8_t sendByte, uint8_t encoder, uint8_t releaseLine) ;
 void setCSLine (uint8_t encoder, uint8_t csLine) ;
 void setCSLine (uint8_t encoder, uint8_t csLine) ;
 void setZeroSPI(uint8_t encoder) ;
 void setZeroSPI(uint8_t encoder) ;
 void resetAMT22(uint8_t encoder) ;
 void resetAMT22(uint8_t encoder) ;
 int bitToDegrees(int bitCount) ;
 int bitToDegrees(int bitCount) ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Encoder_functions.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/FSM.ino
 void MasterFSM(MasterFSMState init_state) ;
 void MasterFSM(MasterFSMState init_state) ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/FSM.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Inner_FSMs.ino
 void Sit() ;
 void Sit() ;
 void Stand() ;
 void Stand() ;
 void Free_Swing() ;
 void Free_Swing() ;
 int GaitFSM(GaitFSMState init_state) ;
 int GaitFSM(GaitFSMState init_state) ;
 void Bend_Knee() ;
 void Bend_Knee() ;
 void Retract_Knee() ;
 void Retract_Knee() ;
 void Extend_Knee() ;
 void Extend_Knee() ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Inner_FSMs.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/LoadCell_functions.ino
 void Init_LC() ;
 void Init_LC() ;
 void Calibrate_LC(HX711 loadcell) ;
 void Calibrate_LC(HX711 loadcell) ;
 int Read_LC1() ;
 int Read_LC1() ;
 int Read_LC2() ;
 int Read_LC2() ;
 int Read_LC3() ;
 int Read_LC3() ;
 int Read_LC4() ;
 int Read_LC4() ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/LoadCell_functions.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/MasterSketch.ino
 void setup() ;
 void setup() ;
 void loop() ;
 void loop() ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/MasterSketch.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Motor_functions.ino
 void Init_Motors() ;
 void Init_Motors() ;
 int rotate(int dir, int angle) ;
 int rotate(int dir, int angle) ;
 int rot(int angle) ;
 int rot(int angle) ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Motor_functions.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Sensor_Interrupt.ino
 void Init_Interrupt() ;
 void Init_Interrupt() ;
 void Read_Sensors() ;
 void Read_Sensors() ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Sensor_Interrupt.ino

//=== START Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Accelerometer_functions.ino
 void Init_Accelerometer() ;
 void Init_Accelerometer() ;
 int getX() ;
 int getX() ;
 int getY() ;
 int getY() ;
 int getZ() ;
 int getZ() ;
 int acc_to_ang(int acc) ;
 int acc_to_ang(int acc) ;
//=== END Forward: /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Accelerometer_functions.ino
#line 3 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Accelerometer_functions.ino"


void Init_Accelerometer() {
  if (! mma.begin()) {
    Serial.println("Couldnt start");
    while (1);
  }
  if (mma.getRange() != 1) {
    mma.setRange(MMA8451_RANGE_2_G);
  }
}

int getX() {
  mma.getEvent(&event);
  return event.acceleration.x;
}

int getY() {
  mma.getEvent(&event);
  return event.acceleration.y;
}

int getZ() {
  mma.getEvent(&event);
  return event.acceleration.z;
}

/**
 * converts given acceleration to an angle that can be
 * used for calculating angle direction for gravity
 */
int acc_to_ang(int acc) {
  return 0;
}

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Button.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Button.ino"
#include <Arduino.h>
#include "Button.h"

/**
 * Initializes button for Locked state
 */
void Init_Button() {
  pinMode(LOCKED_BUTTON, INPUT);
}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Button.ino

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Encoder_functions.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Encoder_functions.ino"
#include "Encoder_functions.h"

/*
 * Code to initialize SPI for the encoders
 */
void Init_Encoders()
{
  //Set the modes for the SPI IO
  pinMode(SPI_SCLK, OUTPUT);
  pinMode(SPI_MOSI, OUTPUT);
  pinMode(SPI_MISO, INPUT);
  pinMode(ENC_0, OUTPUT);
  pinMode(ENC_1, OUTPUT);

  //Initialize the UART serial connection for debugging
  Serial.begin(BAUDRATE_ENCODER);

  //Get the CS line high which is the default inactive state
  digitalWrite(ENC_0, HIGH);
  digitalWrite(ENC_1, HIGH);
  SPI.setClockDivider(SPI_CLOCK_DIV32);    // 500 kHz
  SPI.begin();
}

/*
   This function gets the absolute position from the AMT22 encoder using the SPI bus. The AMT22 position includes 2 checkbits to use
   for position verification. Both 12-bit and 14-bit encoders transfer position via two bytes, giving 16-bits regardless of resolution.
   For 12-bit encoders the position is left-shifted two bits, leaving the right two bits as zeros. This gives the impression that the encoder
   is actually sending 14-bits, when it is actually sending 12-bit values, where every number is multiplied by 4.
   This function takes the pin number of the desired device as an input
   This funciton expects res12 or res14 to properly format position responses.
   Error values are returned as 0xFFFF
*/
uint16_t getPositionSPI(uint8_t encoder, uint8_t resolution)
{
  uint16_t currentPosition;       //16-bit response from encoder
  bool binaryArray[16];           //after receiving the position we will populate this array and use it for calculating the checksum

  //get first byte which is the high byte, shift it 8 bits. don't release line for the first byte
  currentPosition = spiWriteRead(AMT22_NOP, encoder, LOW) << 8;

  //this is the time required between bytes as specified in the datasheet.
  //We will implement that time delay here, however the arduino is not the fastest device so the delay
  //is likely inherantly there already
  delayMicroseconds(3);

  //OR the low byte with the currentPosition variable. release line after second byte
  currentPosition |= spiWriteRead(AMT22_NOP, encoder, HIGH);

  //run through the 16 bits of position and put each bit into a slot in the array so we can do the checksum calculation
  for (int i = 0; i < 16; i++) binaryArray[i] = (0x01) & (currentPosition >> (i));

  //using the equation on the datasheet we can calculate the checksums and then make sure they match what the encoder sent
  if ((binaryArray[15] == !(binaryArray[13] ^ binaryArray[11] ^ binaryArray[9] ^ binaryArray[7] ^ binaryArray[5] ^ binaryArray[3] ^ binaryArray[1]))
      && (binaryArray[14] == !(binaryArray[12] ^ binaryArray[10] ^ binaryArray[8] ^ binaryArray[6] ^ binaryArray[4] ^ binaryArray[2] ^ binaryArray[0])))
  {
    //we got back a good position, so just mask away the checkbits
    currentPosition &= 0x3FFF;
  }
  else
  {
    currentPosition = 0xFFFF; //bad position
  }

  //If the resolution is 12-bits, and wasn't 0xFFFF, then shift position, otherwise do nothing
  if ((resolution == RES12) && (currentPosition != 0xFFFF)) currentPosition = currentPosition >> 2;

  return currentPosition;
}

/*
   This function does the SPI transfer. sendByte is the byte to transmit.
   Use releaseLine to let the spiWriteRead function know if it should release
   the chip select line after transfer.
   This function takes the pin number of the desired device as an input
   The received data is returned.
*/
uint8_t spiWriteRead(uint8_t sendByte, uint8_t encoder, uint8_t releaseLine)
{
  //holder for the received over SPI
  uint8_t data;

  //set cs low, cs may already be low but there's no issue calling it again except for extra time
  setCSLine(encoder , LOW);

  //There is a minimum time requirement after CS goes low before data can be clocked out of the encoder.
  //We will implement that time delay here, however the arduino is not the fastest device so the delay
  //is likely inherantly there already
  delayMicroseconds(3);

  //send the command
  data = SPI.transfer(sendByte);
  delayMicroseconds(3); //There is also a minimum time after clocking that CS should remain asserted before we release it
  setCSLine(encoder, releaseLine); //if releaseLine is high set it high else it stays low

  return data;
}

/*
   This function sets the state of the SPI line. It isn't necessary but makes the code more readable than having digitalWrite everywhere
   This function takes the pin number of the desired device as an input
*/
void setCSLine (uint8_t encoder, uint8_t csLine)
{
  digitalWrite(encoder, csLine);
}

/*
   The AMT22 bus allows for extended commands. The first byte is 0x00 like a normal position transfer, but the
   second byte is the command.
   This function takes the pin number of the desired device as an input
*/
void setZeroSPI(uint8_t encoder)
{
  spiWriteRead(AMT22_NOP, encoder, false);

  //this is the time required between bytes as specified in the datasheet.
  //We will implement that time delay here, however the arduino is not the fastest device so the delay
  //is likely inherantly there already
  delayMicroseconds(3);

  spiWriteRead(AMT22_ZERO, encoder, true);
  delay(250); //250 second delay to allow the encoder to reset
}

/*
   The AMT22 bus allows for extended commands. The first byte is 0x00 like a normal position transfer, but the
   second byte is the command.
   This function takes the pin number of the desired device as an input
*/
void resetAMT22(uint8_t encoder)
{
  spiWriteRead(AMT22_NOP, encoder, false);

  //this is the time required between bytes as specified in the datasheet.
  //We will implement that time delay here, however the arduino is not the fastest device so the delay
  //is likely inherantly there already
  delayMicroseconds(3);

  spiWriteRead(AMT22_RESET, encoder, true);

  delay(250); //250 second delay to allow the encoder to start back up
}

int bitToDegrees(int bitCount) {
  int deg = map(bitCount, 0, ENC_MAX, 0, 359);
  return deg;
}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Encoder_functions.ino

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/FSM.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/FSM.ino"
#include "FSM.h"
#include "Button.h"
#include "LoadCell_functions.h"
#include "Thresholds.h"
#include "Encoder_functions.h"

// boolean for whether the leg has fully retracted for RETRACTION State
//boolean retracted = false;

/**
 * v1.0 of FSM Created on 01/21/20
 * FSM contains the entire FSM of the Leg
 * @param init_state - the initial state that the FSM starts in; should be LOCKED
 * @return exit code - should only happen if fails (returns a 0 in this case)
 */
void MasterFSM(MasterFSMState init_state) {
  MasterFSMState current_state = init_state;
  switch(current_state) {
    case LOCKED:
      if (button_state == 0) {
        current_state = MIDSTANCE;
      }
      break;
    case MIDSTANCE:
      if (button_state == 1) {
        current_state = LOCKED;
      } else if (lcBack > MIDSTANCE_SIT_TH) {
        current_state = SIT;
      } else if (lcFront > MIDSTANCE_GAIT_TH) {
        current_state = GAIT;
      } else if (lcFront < ZERO_ERROR_LC && lcBack < ZERO_ERROR_LC && lcRight < ZERO_ERROR_LC && lcLeft < ZERO_ERROR_LC) {
        current_state = RETRACTION;
      }
      break;
    case SIT:
      if (lcBack > SIT_STAND_TH) {
        current_state = STAND;
      } else {
        // Sit();
      }
      break;
    case STAND:
      if ((encKnee +  ENC_MAX / 2) % ENC_MAX - ENC_MAX / 2 < ZERO_ERROR_ENC && abs(lcFront - lcBack) < ZERO_ERROR_LC) {
        current_state = MIDSTANCE;
      } else {
        // Stand();
      }
      break;
    case GAIT:
      if (lcBack > GAIT_H_STRIKE_TH) {
        current_state = H_STRIKE;
      } else {
        // Gait_Motion();
      }
      break;
    case H_STRIKE:
      if ((encKnee +  ENC_MAX / 2) % ENC_MAX - ENC_MAX / 2 < ZERO_ERROR_ENC && abs(lcFront - lcBack) < ZERO_ERROR_LC) {
        current_state = MIDSTANCE;
      } else {
        // Straighten_Leg();
      }
      break;
    case FULL_EXT:
      if ((encKnee +  ENC_MAX / 2) % ENC_MAX - ENC_MAX / 2 < ZERO_ERROR_ENC && abs(lcFront - lcBack) < ZERO_ERROR_LC) {
        current_state = MIDSTANCE;
      }
      break;
    case RETRACTION:
      if (!retracted) {
        // Retract();
      } else {
        // Free_Swing();
      }
      if (lcFront > RETRACTION_FULL_EXT_LCFRONT_TH && lcBack > RETRACTION_FULL_EXT_LCBACK_TH
            && lcLeft > RETRACTION_FULL_EXT_LCLEFT_TH && lcRight > RETRACTION_FULL_EXT_LCRIGHT_TH) {
        current_state = FULL_EXT;
        retracted = false;
      } else if (lcBack > RETRACTION_H_STRIKE_LCBACK_TH && lcBack - lcFront > RETRACTION_H_STRIKE_LCBACKFRONT_TH
            && (encKnee +  ENC_MAX / 2) % ENC_MAX - ENC_MAX / 2 < ZERO_ERROR_ENC) {
        current_state = H_STRIKE;
        retracted = false;
      }
      
      break;
    default:
      // Do Nothing here
      break;
  }
  curr_state = current_state;
}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/FSM.ino

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Inner_FSMs.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Inner_FSMs.ino"
#include "Accelerometer_functions.h";
#include "Thresholds.h"
#include "Motor_functions.h"
#include "Encoder_functions.h"
#include "Inner_FSMs.h"
#include "LoadCell_functions.h"

/**
 * Function to monitor speed of Stand to Sit motion
 */
void Sit() {
  if (getX() > SIT_X_TH_POS) {
    curr_speed++;
    rotate(MTR_BACKWARD, RET_ANG);
  } else if (getX() < SIT_X_TH_NEG) {
    curr_speed--;
    rotate(MTR_BACKWARD, RET_ANG);
  }
}

/**
 * Function to monitor speed of Sit to Stand motion
 */
void Stand() {
    if (getX() > STAND_X_TH_POS) {
    curr_speed++;
    rotate(MTR_FORWARD, EXT_ANG);
  } else if (getX() < STAND_X_TH_NEG) {
    curr_speed--;
    rotate(MTR_FORWARD, EXT_ANG);
  }
}


void Free_Swing() {
  // Need to figure out how to get g_ang instead of using EXT_ANG and RET_ANG to be able to better control speed through rotate function
  // either use getX and getY or somehow figure out how to use transient rotation from accelerometer
  int g_ang = encKnee + acc_to_ang(getX());
  if (abs(getX() + getY()) > G_TH) {
    if (getY() > G_TH_MAX || getY() < G_TH_MIN) {
      if (getX() < FS_X_TH_NEG) {
        rotate(MTR_FORWARD, g_ang);
      } else {
        rotate(MTR_BACKWARD, g_ang);
      }
    } else {
      analogWrite(PWM, 0);
      curr_speed = 0;
    }
  } else {
    analogWrite(PWM, 0);
    curr_speed = 0;
  }
}

int GaitFSM(GaitFSMState init_state) {
  gait_curr_state = init_state;
  switch(gait_curr_state) {
    case HEEL_OFF:
      // Bend_Knee();
      if (lcFront <= GAIT_HEEL_OFF_SWING_RET_TH ) {
        gait_curr_state = SWING_RET;
      }
      return 1;
    case SWING_RET:
      // Retract_Knee();
      // if (yAcc == ankles_aligned_threshold) {
        gait_curr_state = SWING_EXT;
      return 1;
    case SWING_EXT:
      // Extend_Knee();
      if (lcBack > GAIT_SWING_EXT_END_TH) {
        gait_curr_state = HEEL_OFF; // set it back to the first state for the next run of the Gait FSM
      }
      return 0;
    default:
      return 1;
  }
}

// --------------------------------------------------------------------------------------------------------------

void Bend_Knee() {
  
}

void Retract_Knee() {
  
}

void Extend_Knee() {
  
}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Inner_FSMs.ino

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/LoadCell_functions.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/LoadCell_functions.ino"
#include "LoadCell_functions.h"
#include "SPI.h"

/**
 * Initialization of all loadcells
 */
void Init_LC()
{
  loadcell1.begin(LOADCELL_DOUT_PIN1, LOADCELL_SCK_PIN);
  loadcell1.set_scale(LOADCELL_DIVIDER);
  loadcell1.set_offset(LOADCELL_OFFSET);
  loadcell1.set_gain();
//  loadcell2.begin(LOADCELL_DOUT_PIN2, LOADCELL_SCK_PIN);
//  loadcell2.set_scale(LOADCELL_DIVIDER);
//  loadcell2.set_offset(LOADCELL_OFFSET);
//  loadcell2.set_gain();
//  loadcell3.begin(LOADCELL_DOUT_PIN3, LOADCELL_SCK_PIN);
//  loadcell3.set_scale(LOADCELL_DIVIDER);
//  loadcell3.set_offset(LOADCELL_OFFSET);
//  loadcell3.set_gain();
//  loadcell4.begin(LOADCELL_DOUT_PIN4, LOADCELL_SCK_PIN);
//  loadcell4.set_scale(LOADCELL_DIVIDER);
//  loadcell4.set_offset(LOADCELL_OFFSET);
//  loadcell4.set_gain();
  
}

/**
 * Used for calibration of the loadcells
 * Uses the computer to adjust the variables for the loadcells
 * 
 * NOTE: This may need to change (particularly the use of separate LOADCELL_DIVIDER variables
 * for each loadcell since each loadcell may be different
 * NOTE: The use of the zero factor may be useful for an offset for each loadcell
 */
void Calibrate_LC(HX711 loadcell)
{
  Serial.println("Make sure Arduino is attached to laptop for calibration");
  Serial.println("Calibrating Loadcell 1: ");

  Serial.println("HX711 calibration sketch");
  Serial.println("Remove all weight from scale");
  Serial.println("After readings begin, place known weight on scale");
  Serial.println("Press + or a to increase calibration factor");
  Serial.println("Press - or z to decrease calibration factor");

  loadcell.set_scale();
  loadcell.tare(); //Reset the scale to 0

  long zero_factor = loadcell.read_average(); //Get a baseline reading
  Serial.print("Zero factor: "); //This can be used to remove the need to tare the scale. Useful in permanent scale projects.
  Serial.println(zero_factor);

  float calibration_factor = LOADCELL_DIVIDER;
  while(1) {
    loadcell.set_scale(calibration_factor); //Adjust to this calibration factor

    Serial.print("Reading: ");
    Serial.print(loadcell.get_units(), 1);
    Serial.print(" lbs"); //Change this to kg and re-adjust the calibration factor if you follow SI units like a sane person
    Serial.print(" calibration_factor: ");
    Serial.print(calibration_factor);
    Serial.println();
  
    if(Serial.available())
    {
      char temp = Serial.read();
      if(temp == '+' || temp == 'a')
        calibration_factor += 10;
      else if(temp == '-' || temp == 'z')
        calibration_factor -= 10;
      else if(temp == '0')
        break;
    }
  }
  
}

/**
 * Reads loadcell 1 (front) and updates global variable
 */
int Read_LC1() {
  return loadcell1.read();
}

/**
 * Reads loadcell 2 (back) and updates global variable
 */
int Read_LC2() {
  return loadcell1.read();
}

/**
 * Reads loadcell 3 (left) and updates global variable
 */
int Read_LC3() {
  return loadcell1.read();
}

/**
 * Reads loadcell 4 (right) and updates global variable
 */
int Read_LC4() {
  return loadcell1.read();
}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/LoadCell_functions.ino

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/MasterSketch.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/MasterSketch.ino"
#include "LoadCell_functions.h"
#include "Encoder_functions.h"
#include "Motor_functions.h"
#include "FSM.h"
#include "Button.h"
#include "Thresholds.h"
#include "Sensor_Interrupt.h"
#include "Inner_FSMs.h"
//#include "Accelerometer_functions.h"


//#define DEBUG_CONFIG // comment this line out to run full system
//#define CALIBRATION_CONFIG_LC // comment this line out to run full system
//#define CALIBRATION_CONFIG_ENCODER // comment this line out to run full system
//#define EXTEND_LEG // this is used to extend the leg upon startup


void setup() {
    // Initialize
    Init_Encoders();
    Init_LC();
//  Init_Motors();
//  Init_Button();
    Init_Interrupt();

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
    setZeroSPI(ENC_0);
    setZeroSPI(ENC_1);
#endif

#ifdef EXTEND_LEG

#endif

}

void loop() {
//  Serial.print("LC: ");
//  Serial.print(loadcell1.read()/1000);
//  Serial.println();
//  Serial.print("Encoder 0: ");
//  Serial.print(getPositionSPI(ENC_0, RES14), DEC);
//  Serial.println();
//  Serial.print("Encoder 1: ");
//  Serial.print(getPositionSPI(ENC_1, RES14), DEC);
//  Serial.println();
//  MasterFSM(curr_state);
    Serial.println(encKnee);
    rot(100);
    Serial.println(curr_speed);
}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/MasterSketch.ino

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Motor_functions.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Motor_functions.ino"
#include <Arduino.h>
#include "Motor_functions.h"
#include "Encoder_functions.h"

/**
 * Initializes motor
 */
void Init_Motors()
{
  pinMode(PWM, OUTPUT);
  pinMode(DIR, OUTPUT);  
  analogWrite(PWM,0);
  digitalWrite(DIR,HIGH);
}

/**
 * rotate is the base function for turning the motor
 * @param dir - is the direction of that the motor spins
 * @param angle - is the destination angle at the end of the rotation
 * @return the current angle
 */
int rotate(int dir, int angle) {
  digitalWrite(DIR, dir);
  curr_ang = encKnee;
  int threshold_range = dir == MTR_FORWARD ? angle + RANGE_SLOW : angle - RANGE_SLOW; // This may change depending on direction of spinning
  if (curr_speed < MAX_MPWR && curr_ang > threshold_range) {
    // speed motor up - need more effective implementation here (same for slowing down)
    curr_speed++;
  } else if (curr_ang < threshold_range && curr_speed != 0) {
    curr_speed--;
  }
  if (curr_ang < angle + RANGE_STOP && curr_ang > angle - RANGE_STOP) { // range of error allowed
    curr_speed = 0;
    analogWrite(PWM, curr_speed);
  } else {
    analogWrite(PWM, curr_speed);
  }
}

int rot(int angle) {
  int vel = MAX_MPWR;
  int slowVel = MAX_MPWR / 2;

  if (encKnee < (angle - RANGE_STOP)) {
    digitalWrite(DIR, MTR_BACKWARD);
    if ((angle - encKnee) < RANGE_SLOW)
      curr_speed = slowVel;
    else curr_speed = MAX_MPWR;
  }
  else if (encKnee > (angle + RANGE_STOP)) {
    digitalWrite(DIR, MTR_FORWARD);
    if ((encKnee - angle) < RANGE_SLOW)
      curr_speed = slowVel;
    else curr_speed = MAX_MPWR;
  }
  else curr_speed = MIN_MPWR;

  analogWrite(PWM, curr_speed);  
}

// we are assuming high for dir is clockwise
///**
// * @param halt is the stopping position
// * @param is the max speed
// * @param dir is the direction
// * @return the current position
// */
//uint16_t rotate(uint16_t halt, uint8_t pwm, uint8_t dir)
//{
//  int curr_pos = getPositionSPI(ENC_0, RES14);
//  int change_dist = dir ? halt - curr_pos : MAX_DIST - (halt - curr_pos);
//  int init_dist = change_dist;
//
//  while (abs(change_dist) > STOP_DIST)
//  {
//    // calculate speed ratio (ramps up and down; fastest at half the distance travelled)
//    int curr_speed = 1 - abs(change_dist - init_dist / 2);
//    int speedM = curr_speed * MOTOR_PWR + MIN_MPWR;
//    // write to the motor to go the desired speed in the desired direction
//    digitalWrite(DIR, dir);
//    analogWrite(PWM, speedM);
//
//    // get new current position
//    curr_pos = getPositionSPI(ENC_0, RES14);
//    change_dist = dir ? halt - curr_pos : MAX_DIST - (halt - curr_pos);
//  }
//  return curr_pos;
//}

//uint16_t stall(uint8_t pwm, uint8_t dir)
//{
//  return 0;
//}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Motor_functions.ino

//=== START : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Sensor_Interrupt.ino
#line 1 "/Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Sensor_Interrupt.ino"
#include <TimerOne.h>
#include "Sensor_Interrupt.h"
#include "Encoder_functions.h"
#include "Motor_functions.h"
#include "FSM.h"

/**
 * Initializes Interrupt
 */
void Init_Interrupt() {
//  //set timer1 interrupt at 20Hz
//  TCCR1A = 0;// set entire TCCR0A register to 0
//  TCCR1B = 0x0C;// set WGM12 to CTC mode and set prescale to 256
//  TCNT1  = 0;//initialize counter value to 0
//  // set compare match register for about 20hz increments
//  OCR1A = 3124;// = (16*10^6) / (20*4096) - 1 (must be <256) 
//  // enable timer compare interrupt
//  TIMSK1 |= (1 << OCIE1A);

  Timer1.initialize(50000);
  Timer1.attachInterrupt(Read_Sensors, 50000);
}

/**
 * Function to update sensor global variables
 */
void Read_Sensors() {
  encKnee = bitToDegrees(getPositionSPI(ENC_0, RES14));
//  encCAM = bitToDegrees(getPositionSPI(ENC_1, RES14));
//  lcFront = Read_LC1();
//  lcBack = Read_LC2();
//  lcLeft = Read_LC3();
//  lcRight = Read_LC4();
  if (encKnee == RET_ANG) {
    fully_retracted = true;
    fully_extended = false;
    retracted = true;
  } else if (encKnee == EXT_ANG) {
    fully_extended = true;
    fully_retracted = false;
  } else {
    fully_extended = false;
    fully_retracted = false;
  }
}

/**
 * Interrupt function
 */
//ISR(__vectorTIMER_COMPA_vect) {
//  Serial.println("Interrupt");
//  Read_Sensors();
//}

//=== END : /Users/ramsothman/Documents/Backup/cybathlonTest/Master Sketch Test/MasterTest/Sensor_Interrupt.ino
