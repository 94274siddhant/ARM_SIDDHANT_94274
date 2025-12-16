#include <stdio.h>
#include <stdint.h>

int main() {
    uint8_t value = 5;   // 0000 0101

    // Left shift by 2 positions
    uint8_t left_shift = value << 2;

    // Right shift original value by 1 position
    uint8_t right_shift = value >> 1;

    printf("Original value = %d\n", value);
    printf("After left shift by 2 = %d\n", left_shift);
    printf("After right shift by 1 = %d\n", right_shift);

    return 0;
}