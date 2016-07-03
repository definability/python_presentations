#include <stdlib.h>

int mul(int a, int b) {
    return a * b;
}

int dot(int *a, int *b, size_t length) {
    int result = 0;
    do {
        result += a[length-1] * b[length-1];
    } while (--length > 0);
    return result;
}
