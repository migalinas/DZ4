#include <stdio.h>
#include "sem4_1.h"
#include "sem4_1_func.c"

int main() {
    printf("Enter a number: ");
    int decimal_number = hex_string_to_int();
    if (decimal_number != -1) {
        printf("Result: %d\n", decimal_number);
    }
    return 0;
}
