// XBoot config header file
// MCU: atxmega256a3u
// F_CPU: 32000000

#define USE_LED
#define LED_INV 0
#define LED_PIN 1
#define LED_PORT_NAME F


#define USE_ENTER_DELAY
#define ENTER_BLINK_COUNT 3
#define ENTER_BLINK_WAIT 300000

#define USE_UART
#define USE_ENTER_UART
//#define ENTER_UART_NEED_SYNC
#define UART_BAUD_RATE 115200
#define UART_PORT_NAME C
#define UART_NUMBER 0
//#define UART_EN_PIN_INV 0
//#define UART_EN_PORT_NAME C
//#define UART_EN_PIN 4
//#define UART_RX_PUEN


/*
#define ATTACH_LED_INV 1
#define ATTACH_LED_PIN 1
#define ATTACH_LED_PORT_NAME A
*/
#define ENABLE_API
#define ENABLE_API_FIRMWARE_UPDATE
#define ENABLE_API_LOW_LEVEL_FLASH
#define ENABLE_API_SPM_WRAPPER
#define ENABLE_BLOCK_SUPPORT
#define ENABLE_CRC_SUPPORT
#define ENABLE_EEPROM_BYTE_SUPPORT
#define ENABLE_FLASH_BYTE_SUPPORT
#define ENABLE_FLASH_ERASE_WRITE
#define ENABLE_FUSE_BITS
#define ENABLE_LOCK_BITS

/*
#define FIFO_BIT_REVERSE
#define FIFO_CTL_PORT_NAME D
#define FIFO_DATA_PORT_NAME C
#define FIFO_RD_N 1
#define FIFO_RXF_N 3
#define FIFO_TXE_N 2
#define FIFO_WR_N 0
#define I2C_ADDRESS 0x10
#define I2C_AUTONEG_DIS_GC 0
#define I2C_AUTONEG_DIS_PROMISC 1
#define I2C_AUTONEG_PIN 2
#define I2C_AUTONEG_PORT_NAME A
#define I2C_DEVICE_PORT C
#define I2C_GC_ENABLE 1
#define I2C_MATCH_ANY 1
*/

#define USE_API_VERSION 1

#define WATCHDOG_TIMEOUT WDT_PER_1KCLK_gc
