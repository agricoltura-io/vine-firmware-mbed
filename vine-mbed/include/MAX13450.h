#ifndef MAX13450_H
#define MAX13450_H

#include <mbed.h>
#include <BufferedSerial.h>

class MAX13450 : public BufferedSerial
{
private:
    typedef unsigned int word;
    typedef uint8_t byte;
    typedef uint8_t boolean;
    typedef void (*voidFuncPtr)(void);

public:
    // Create a BufferedSerial port, and DigitalInOut ports for RS485 chip control 
    MAX13450(PinName tx, PinName rx, PinName re, PinName term, PinName de);

    //Transmit a message
    void RS485_TX(uint8_t portNum, uint8_t data);

    // Receover a message
    uint8_t RS485_RX(uint8_t portNum);

    //set termination state of the RS485 port
    uint8_t RS485_Term_Set(uint8_t portNum, uint8_t termState);
};
#endif