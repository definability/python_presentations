#include <stdlib.h>

int mul(int a, int b) {
    return a * b;
}

int dot(int *a, int *b, size_t length) {
    int result = 0;
    while (length --> 0) {
        result += a[length] * b[length];
    }
    return result;
}
