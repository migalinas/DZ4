#include <stdio.h>
#include "sem4_2.h"
#include "sem4_2_func.c"

int main() {
    printf("Enter the number: ");
    unsigned int num = read_hex();
    printf("Result: %d\n", count_odd_bits(num));
    return 0;
}
