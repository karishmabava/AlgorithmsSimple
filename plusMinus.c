/* ==== QUESTION-===========
Given an array of integers, calculate which fraction of its elements are positive, which fraction of its elements are negative, and which fraction of its elements are zeroes, respectively. Print the decimal value of each fraction on a new line.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

Input Format

The first line contains an integer, , denoting the size of the array. 
The second line contains  space-separated integers describing an array of numbers .

Output Format

You must print the following  lines:

A decimal representing of the fraction of positive numbers in the array.
A decimal representing of the fraction of negative numbers in the array.
A decimal representing of the fraction of zeroes in the array.
Sample Input

6
-4 3 -9 0 4 1         
Sample Output

0.500000
0.333333
0.166667
Explanation

There are  positive numbers,  negative numbers, and  zero in the array. 
The respective fractions of positive numbers, negative numbers and zeroes are ,  and , respectively.3/6=0.500000, 2/6= 0.3333333, 1/6=0.1666667
=========================*/

// Complexity O(n)
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
    int arr[n];
    int num_positive=0, num_negative=0, num_zero=0;
    
    // Array of floats to hold the result
    // Since there are three posibilities, -ve, +ve, zero
    // so result array can be of size 3
    float result[3] = {0};
    
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
         if(arr[arr_i] > 0){
            num_positive++; 
         } else if(arr[arr_i] < 0) {
            num_negative++; 
         } else {
             num_zero++;
         }
    }
    
    result[0] = (float)num_positive/n;
    result[1] = (float)num_negative/n;
    result[2] = (float)num_zero/n;
    
    for(int i=0; i<3; i++){
        printf("%.6f\n", result[i]);
    }
    
    return 0;
}
