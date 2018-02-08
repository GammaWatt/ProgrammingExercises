#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
Count instances of maxvalue in array
*/

int birthdayCakeCandles(int n, int ar_size, int* ar) {
    // Complete this function
    // init to a value of the array so the init value doesn't interfere with finding max.
    int max = ar[0]; 
    int count = 0;
    for ( int i = 0; i < ar_size; i++ ) {
        if ( max < ar[i] ) { 
            max = ar[i];
            // If I have to change max, then I haven't found the max value, yet,
            // and the remainder of the array with either contain the same,
            // less than the max value.
            count = 1;
        } else if ( max == ar[i] ) {
            count++;
        }
    }
    return count;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
