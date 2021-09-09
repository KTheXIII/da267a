#include "random.h"

#include "esp_system.h"

uint32_t rand_range(uint32_t min, uint32_t max) {
	return (esp_random() % (max - min)) + min;
}

uint32_t rand_max(uint32_t max) {
	return esp_random() % max;
}

