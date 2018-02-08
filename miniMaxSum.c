#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
take 5 ints as input (the bounds can take huge numbers with 9 zeros)
calculate the max sum possible with 4 of the 5 numbers
and the minimum sum possible with 4 of the 5 numbers
and output the result
*/

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
    long long max = arr[0], min = arr[0], sum = 0;
    // min and max must be initialized to at least a value of the array
    // if not, if the array does not contain a value above or below the
    // initialized value, then their values will never change
    for ( int i = 0; i < arr_size; i ++ ) {
        if ( arr[i] > max ) {
            max = arr[i];
        }
        if ( arr[i] < min ) {
            min = arr[i];
        }
        sum += arr[i];
    }
    // max_sum = sum - min; maximum sum possible of 4 digits in array
    // min_sum = sum - max; minimum sum possible of 4 digits in array
    printf("%lld %lld", sum - max, sum - min);
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    free(arr)
    return 0;
}
