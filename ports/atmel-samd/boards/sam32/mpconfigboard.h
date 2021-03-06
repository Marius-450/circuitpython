
#define MICROPY_HW_BOARD_NAME "SAM32v2a"
#define MICROPY_HW_MCU_NAME "samd51j20"
#define CIRCUITPY_MCU_FAMILY samd51

#define MICROPY_HW_LED_STATUS   (&pin_PA27)
#define MICROPY_HW_NEOPIXEL 	(&pin_PA15)

#define MICROPY_PORT_A        (PORT_PA24 | PORT_PA25)
#define MICROPY_PORT_B        (0)
#define MICROPY_PORT_C        (0)
#define MICROPY_PORT_D 	      (0)

// No microcontroller.nvm
#define CIRCUITPY_INTERNAL_NVM_SIZE 0

#define BOARD_HAS_CRYSTAL 1

#define DEFAULT_I2C_BUS_SCL  (&pin_PA04)
#define DEFAULT_I2C_BUS_SDA  (&pin_PA07)

#define DEFAULT_SPI_BUS_SCK  (&pin_PB13)
#define DEFAULT_SPI_BUS_MOSI (&pin_PB12)
#define DEFAULT_SPI_BUS_MISO (&pin_PB14)

#define DEFAULT_UART_BUS_TX  (&pin_PB16)
#define DEFAULT_UART_BUS_RX  (&pin_PB17)

#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1
