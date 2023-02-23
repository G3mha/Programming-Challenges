#include <stdio.h>

// return an array with all the elements plus 1
int increase(int v[], int l, int r) {
    // l is the first index of the v-interval (inclusive)
    // r is the last index of the v-interval (inclusive)

    increase(v, l, r-1);
    
}

int main(void) {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int v[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    int result = my_sum(v, n);
    printf("Sum of %d elements is %d\n", n, result);

    return 0;
}