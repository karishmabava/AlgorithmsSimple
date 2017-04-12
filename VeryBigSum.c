// The question is to add two very big sum
// Although this is an easy question for just iterate
// Sum but it teaches us that we should keep an eye on the 
// Integer we use. an "int" data type is capable of 32 bit
// but if you keep adding more than two 32bit integer, simply,
// an "int" can't hold it. So use long or long long.

/*======= QUESTION
You are given an array of integers of size . You need to print the sum of the elements in the array, keeping in mind that some of those integers may be quite large.

Input Format

The first line of the input consists of an integer . The next line contains  space-separated integers contained in the array.

Output Format

Print a single value equal to the sum of the elements in the array.

Constraints 
 

Sample Input

5
1000000001 1000000002 1000000003 1000000004 1000000005
Output

5000000015
Note:

The range of the 32-bit integer is .
When we add several integer values, the resulting sum might exceed the above range. You might need to use long long int in C/C++ or long data type in Java to store such sums.
=================*/

// Complexity: O(n)
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

