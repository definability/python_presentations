#include <stdlib.h>

int cross(float* u, float* v, float* w) {
    w[0] = u[1] * v[2] - u[2] * v[1];
    w[1] = u[2] * v[0] - u[0] * v[2];
    w[2] = u[0] * v[1] - u[1] * v[0];
    return 0;
}

int cross_vectors(float *u, float *v, float *w, size_t amount) {
    while(amount --> 0) {
        cross(&u[amount * 3], &v[amount * 3], &w[amount * 3]);
    }
}
