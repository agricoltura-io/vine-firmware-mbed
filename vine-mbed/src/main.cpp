#include <mbed.h>
#include <BufferedSerial.h>
#include <DigitalInOut.h>
#include <USBCDC.h>

// Standard Variable Declariations
volatile uint8_t Relay_1_State = 0;
volatile uint8_t Relay_2_State = 0;
volatile uint8_t RS485_Port1_Term_State = 0;
volatile uint8_t RS485_Port2_Term_State = 0;

// UART Serial Objects
volatile BufferedSerial SENSE_UART(PB_10, PC_5, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);
volatile BufferedSerial RS485_ONE_UART(PA_0, PA_1, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);
volatile BufferedSerial RS485_TWO_UART(PA_2, PA_3, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);

int main()
{
  // put your setup code here, to run once:

  // USB VCOM Port Related Variables
  unsigned int USB_COM_DATA[6] = {};                 // Data Array
  uint8_t *p_USB_COM_DATA = (uint8_t *)USB_COM_DATA; // write pointer
  uint32_t USB_size_read;                            // the number of bytes actually received

  // Serial Object declarations
  // I2C Ports
  I2C i2c_IO_Expander(PA_8, PC_9);
  I2C i2c_SENSE(PB_6, PB_7);
  /*
  // UART Serial Objects
  BufferedSerial SENSE_UART(PB_10, PC_5, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);
  BufferedSerial RS485_ONE_UART(PA_0, PA_1, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);
  BufferedSerial RS485_TWO_UART(PA_2, PA_3, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);
  */
  //USB Virtual COM Port
  USBCDC USP_Port();

  //IO Pin Declarations
  //IO Expander control lines
  DigitalInOut IO_RESET(PC_6);
  DigitalInOut IO_INT_N(PC_7);
  // I2C expander control line
  DigitalInOut I2C_MUX1_RESET(PA_8);
  //74 Mux/UART Mux control lines
  DigitalInOut USW1_EN(PB_0);
  DigitalInOut USW1_S0(PB_1);
  DigitalInOut USW1_S1(PB_2);

  //RS485 Transceiver 1 control lines
  DigitalInOut RS485_TERM_EN1(PC_0);
  DigitalInOut RS485_UART_DE1(PC_2);
  DigitalInOut RS485_UART_RE1(PC_1);
  DigitalInOut RS485_SL_RATE1(PC_3);
  //RS485 Transceiver 2 control lines
  DigitalInOut RS485_TERM_EN2(PA_4);
  DigitalInOut RS485_UART_DE2(PA_6);
  DigitalInOut RS485_UART_RE2(PA_5);
  DigitalInOut RS485_SL_RATE2(PA_7);

  // MAIN LOOP
  while (1)
  {
    // put your main code here, to run repeatedly:

  } // End Main While Loop

} // end main

// User Defined Functions

// Calculate 8-bit CRC

/*
static byte crc8(const byte *addr, byte len)
{
}
*/

//Transmit a message
void transmit(uint8_t data)
{
}

// Receover a message
uint8_t receive(uint8_t portNum)
{
}

// Transmission complete
void sendComplemented(const uint8_t what)
{
  
}

//set termination state of the RS485 port
uint8_t RS485_Term_Set(uint8_t termState)
{
}

// Selecting I2C mux output and control of sensors
uint8_t I2C_SenseControl(uint8_t SensorPortNum)
{

  return 0;
}
// Control of I2C GPIO expander
void I2C_IO_Control(uint8_t IO_PortNum, uint8_t PinState)
{
}
// Relay Control
uint8_t Relay_Switch_Control(uint8_t state_to_switch)
{
  return 0;
}