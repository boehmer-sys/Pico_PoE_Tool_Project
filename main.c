#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    // Initialize stdio
    stdio_init_all();
    
    // Initialize the onboard LED
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    
    printf("Pico PoE Tool Project Starting...\n");
    
    // Main loop - blink LED
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(500);
        gpio_put(LED_PIN, 0);
        sleep_ms(500);
        printf("LED blink\n");
    }
    
    return 0;
}