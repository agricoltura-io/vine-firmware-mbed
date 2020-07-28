#include <mbed.h>

int main() {

  // put your setup code here, to run once:

  // Standard Variable Declariations
  // Stores that state of the relay switch, for relay control function return value
  int Relay_1_State=0;
  int Relay_2_State=0;

  // Serial Object declarations 
  // I2C Ports 
  I2C i2c_IO_Expander(PA_8,PC_9);
  I2C i2c_SENSE(PB_6,PB_7);
  // UART Serial Objects
  BufferedSerial SENSE_UART(PB_10, PC_5, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);
  BufferedSerial RS485_ONE_UART(PA_0, PA_1, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);
  BufferedSerial RS485_TWO_UART(PA_2,PA_3, MBED_CONF_PLATFORM_DEFAULT_SERIAL_BAUD_RATE);

  //USBSerial USB_Port();



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
  DigitalInOut RS485_TERM_EN2(PA_4);
  DigitalInOut RS485_UART_DE2(PA_6);
  DigitalInOut RS485_UART_RE2(PA_5);
  DigitalInOut RS485_SL_RATE2(PA_7);
  //RS485 Transceiver 2 control lines
  DigitalInOut RS485_TERM_EN1(PC_0);
  DigitalInOut RS485_UART_DE1(PC_2);
  DigitalInOut RS485_UART_RE1(PC_1);
  DigitalInOut RS485_SL_RATE1(PC_3);

  //Function Prototypes
  // Use RS485 port
  void RS485_Transceive(int portNum, int data);
  int RS485_RX(int portNum);
  // Selecting I2C mux output and control of sensors
  int I2C_SenseControl(int SensorPortNum);
  // Control of I2C GPIO expander
  void I2C_IO_Control(int IO_PortNum, int PinState);
  // Relay Control 
  int Relay_Switch_Control();

  // MAIN LOOP
  while(1) {
    // put your main code here, to run repeatedly:
  }// End Main While Loop


}// end main
