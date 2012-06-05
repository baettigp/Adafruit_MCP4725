/**************************************************************************/
/*! 
    @file     Adafruit_MCP4725.h
    @author   K. Townsend (Adafruit Industries)
	@license  BSD (see license.txt)
	
	This is a library for the Adafruit MCP4725 breakout board
	----> https://www.adafruit.com/products/???
	
	Adafruit invests time and resources providing this open source code, 
	please support Adafruit and open-source hardware by purchasing 
	products from Adafruit!

	@section  HISTORY

    v1.0  - First release
*/
/**************************************************************************/

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Wire.h>

#define MCP4725_ADDRESS                 (0x62)   // 1100010 - Assumes A0 is GND and A2,A1 are 01 (MCP4725A1T-E/CH)
#define MCP4726_CMD_WRITEDAC            (0x40)  // Writes data to the DAC
#define MCP4726_CMD_WRITEDACEEPROM      (0x60)  // Writes data to the DAC and the EEPROM (persisting the assigned value after reset)

class Adafruit_MCP4725{
 public:
  Adafruit_MCP4725();
  void begin(void);  
  void setVoltage( uint16_t output, bool writeEEPROM );

 private:
};
