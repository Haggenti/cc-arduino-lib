#ifndef CONFIG_H
#define CONFIG_H

// define firmware version
#define CC_FIRMWARE_MAJOR   0
#define CC_FIRMWARE_MINOR   5
#define CC_FIRMWARE_MICRO   1

#define MAX_PAGES 1
#define CC_MAX_ACTUATORGROUPS 1
#define CC_OPTIONS_LIST_FRAME_SIZE 5
////////// Arduino Uno
#ifdef ARDUINO_AVR_UNO

// maximum number of devices that can be created
#define CC_MAX_DEVICES      1
// maximum number of actuators that can be created per device
#define CC_MAX_ACTUATORS    8
// maximum number of assignments that can be created per actuator
#define CC_MAX_ASSIGNMENTS  1


// define the size of the queue used to store the updates before send them
#define CC_UPDATES_FIFO_SIZE    10

// disable string support
#define CC_STRING_NOT_SUPPORTED


////////// Arduino Mega
#elif defined(__AVR_ATmega1280__) || defined(__AVR_ATmega2560__)

// maximum number of devices that can be created
#define CC_MAX_DEVICES      1
// maximum number of actuators that can be created per device
#define CC_MAX_ACTUATORS    16
// maximum number of assignments that can be created per actuator
#define CC_MAX_ASSIGNMENTS  2

// define the size of the queue used to store the updates before send them
#define CC_UPDATES_FIFO_SIZE    20

#define MAX_PAGES 1
#define CC_MAX_ACTUATORGROUPS 1
#define CC_OPTIONS_LIST_FRAME_SIZE 5
#define CC_MAX_OPTIONS_ITEMS    4




////////// All other Arduinos
#else

// maximum number of devices that can be created
#define CC_MAX_DEVICES      1
// maximum number of actuators that can be created per device
#define CC_MAX_ACTUATORS    2
// maximum number of assignments that can be created per actuator
#define CC_MAX_ASSIGNMENTS  1

// define the size of the queue used to store the updates before send them
#define CC_UPDATES_FIFO_SIZE    5

// disable string support
#define CC_STRING_NOT_SUPPORTED

#endif

#endif
