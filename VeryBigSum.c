// The question is to add two very big sum
// Although this is an easy question for just iterate
// Sum but it teaches us that we should keep an eye on the 
// Integer we use. an "int" data type is capable of 32 bit
// but if you keep adding more than two 32bit integer, simply,
// an "int" can't hold it. So use long or long long.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main(){
    int n; 
    scanf("%d",&n);
    long long int arr[n];
    long long int sum = 0;
    
	// Iterating and simply getting the result
	// Basic maths
	for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%lld",&arr[arr_i]);
       sum  += arr[arr_i];
    }
    
    // Printing the result
    printf("%lld ", sum);
    return 0;
}

