#include <MAX13450.h>
#include <stdarg.h>


typedef unsigned int word;
typedef uint8_t byte;
typedef uint8_t boolean;
typedef void (*voidFuncPtr)(void);
Timer lapse;
    const byte STX = '\2';
    const byte ETX = '\3';

MAX13450::MAX13450(PinName tx, PinName rx, PinName re, PinName term, PinName de)
    : BufferedSerial(tx, rx)
{
    return;
}

void MAX13450::RS485_TX(uint8_t portNum, uint8_t data)
{
    // Shit goes here
}

uint8_t MAX13450::RS485_RX(uint8_t portNum)
{
    return 0; // temp return 0
}

uint8_t MAX13450::RS485_Term_Set(uint8_t portNum, uint8_t termState)
{
    if (portNum == 1)
    {
        if (termState == 0)
        {
            // RS485_TERM_EN1.write(0);
        }
        else if (termState == 1)
        {
            // RS485_TERM_EN1.write(1);
        }
    } // end if
    else
    {
        if (termState == 0)
        {
            // RS485_TERM_EN2.write(0);
        }
        else if (termState == 1)
        {
            // RS485_TERM_EN2.write(1);
        }
    } // end else
    return 0;
}