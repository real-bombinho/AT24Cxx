/* 
 * File:   AT24Cxx.h
 * Author: Manjunath CV
 *
 * Created on February 16, 2016, 12:19 AM
 */

#ifndef AT24CXX_H
#define AT24CXX_H

#include <Arduino.h>

class AT24Cxx {
public:
	AT24Cxx(const uint8_t i2c_address);
	AT24Cxx(const uint8_t i2c_address, uint32_t eeprom_size);
	uint8_t read(const uint16_t address);
	void write(const uint16_t address, uint8_t value);
//	void write(const uint16_t address, uint8_t *ptr, uint8_t size);
	void update(const uint16_t address, uint8_t value);
	uint32_t length(void);

//	const int& operator[](const uint16_t address) const;
	int operator[](const uint16_t address);  // Used to access
	
	//AT24Cxx(const AT24Cxx& orig);
	//virtual ~AT24Cxx();

protected:
	uint32_t eeprom_size;
	uint8_t i2c_address;
};

#endif /* AT24CXX_H */

