#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t reg = 0xAA;   // 1010 1010

    // Read bits from bit 2 to bit 4
    uint8_t read_bits = (reg >> 2) & 0x07;

    printf("Register before modification: 0x%X\n", reg);
    printf("Bits from 2 to 4: %d\n", read_bits);

    // Write 0b011 into bits 2 to 4
    reg &= ~(0x07 << 2);      // Clear bits 2 to 4
    reg |= (0x03 << 2);      // Set bits 2 to 4 as 011

    printf("Register after modification: 0x%X\n", reg);

    return 0;
}ss