#include <stdio.h>

// return an array with all the elements plus 1
void increase(int vector[], int l, int r, int *vec[]) {
    // l is the first index of the v-interval (inclusive)
    // r is the last index of the v-interval (inclusive)
    if (l > r) {
        return 0;
    }
    increase(vector, l, r - 1);
    vector[r]++;
    return vector;
}

int main(void) {
    int n;
    printf("Enter n: ");
    int v[n];
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int l;
    printf("Enter the first index of the interval: ");
    scanf("%d", &l);

    int r;
    printf("Enter the last index of the interval: ");
    scanf("%d", &r);
    
    increase(v, l, r);

    // print the result on vector variable
    for (int i = 0; i < n; i++) {
        printf("v[%d] = %d ", i, v[i]);
    }

    
    return 0;
}