#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t reg = 0xABCD;

    // 1. Extract lower 4 bits
    uint8_t lower4 = reg & 0x000F;

    // 2. Extract upper 4 bits of the lower byte
    uint8_t upper4_lower_byte = (reg & 0x00F0) >> 4;

    // 3. Print extracted values in hexadecimal
    printf("Lower 4 bits: 0x%X\n", lower4);
    printf("Upper 4 bits of lower byte: 0x%X\n", upper4_lower_byte);

    return 0;
}