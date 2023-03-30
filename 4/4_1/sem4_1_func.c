#include "sem4_1.h"

int hex_to_int(char hex_digit) {
    if (hex_digit >= '0' && hex_digit <= '9') {
        return hex_digit - '0';
    } else if (hex_digit >= 'a' && hex_digit <= 'f') {
        return hex_digit - 'a' + 10;
    } else if (hex_digit >= 'A' && hex_digit <= 'F') {
        return hex_digit - 'A' + 10;
    } else {
        return -1;
    }
}

int hex_string_to_int() {
    int result = 0;
    char hex_digit = getchar();
    while (hex_digit != '\n') {
        int value = hex_to_int(hex_digit);
        if (value == -1) {
            printf("Error: invalid character '%c' in input\n", hex_digit);
            return -1;
        }
        result = result * 16 + value;
        hex_digit = getchar();
    }
    return result;
}

