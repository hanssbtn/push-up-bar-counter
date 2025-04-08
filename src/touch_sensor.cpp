#include "touch_sensor.h"

void init_touch_sensor_void(void) {
	LEFT_TOUCH_SENSOR_DDR &= ~LEFT_TOUCH_SENSOR_PIN_MASK;
	RIGHT_TOUCH_SENSOR_DDR &= ~RIGHT_TOUCH_SENSOR_PIN_MASK;
	PCICR |= TOUCH_SENSOR_PCIE_MASK;
	TOUCH_SENSOR_PCMSK |= TOUCH_SENSOR_PCINT_MASK;
}