#include <math.h>
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
Comparing points give to two people in sets of 3. 3 points to alice, 3 points to bob. Points = {p,p,p}.
If alice[n] > bob[n] then bob gets 1 point incremented to them and visa versa.
If alice[n] == bob[n], then neither get a point increment.
input looks like this:
program running...
{alice} > 1, 2, 3
{bob}  > 3, 2, 1
{output} > 1 1
*/

void check(int ax, int bx, int* a, int* b){
    if (ax > bx) {
        *a = *a + 1;
    } else if (ax < bx) {
        *b = *b + 1;
    }
}

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
    int alice = 0, bob = 0;
    check(a0, b0, &alice, &bob);
    check(a1, b1, &alice, &bob);
    check(a2, b2, &alice, &bob);
    int *result = malloc(2*sizeof(int));
    result[0] = alice;
    result[1] = bob;
    *result_size = sizeof(result)/sizeof(int);
    return result;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    free(result);
    puts("");
    

    return 0;
}
