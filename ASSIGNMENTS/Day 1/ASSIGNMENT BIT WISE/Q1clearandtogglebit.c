##include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t reg = 0x2A;

    // Set bit 4
    reg |= (1 << 4);
    printf("After set bit 4: 0x%X\n", reg);

    // Clear bit 1
    reg &= ~(1 << 1);
    printf("After clear bit 1: 0x%X\n", reg);

    // Toggle bit 5
    reg ^= (1 << 5);
    printf("After toggle bit 5: 0x%X\n", reg);

    return 0;
}