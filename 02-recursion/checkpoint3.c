#include <stdio.h>

// return an array with all the elements plus 1
void increase(int vector[], int l, int r) {
    // l is the first index of the v-interval (inclusive)
    // r is the last index of the v-interval (inclusive)
    if (l > r) {
        return 0;
    }
    increase(vector, l, r - 1);
    vector[r]++;
}