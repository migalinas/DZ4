#include "sem4_2.h"

int count_odd_bits(unsigned int num) {
    int count = 0;
    for (int i = 1; num > 0; i++) {
        if (i % 2 != 0 && num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

unsigned int read_hex() {
    unsigned int num = 0;
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c >= '0' && c <= '9') {
            num = num * 16 + (c - '0');
        } else if (c >= 'a' && c <= 'f') {
            num = num * 16 + (c - 'a' + 10);
        } else if (c >= 'A' && c <= 'F') {
            num = num * 16 + (c - 'A' + 10);
        }
    }
    return num;
}
