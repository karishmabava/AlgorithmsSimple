// Question

/*Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Input Format

A single line of five space-separated integers.

Constraints

Each integer is in the inclusive range .
Output Format

Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by summing exactly four of the five integers. (The output can be greater than 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14
Explanation

Our initial numbers are , , , , and . We can calculate the following sums using four of the five integers:

If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
If we sum everything except , our sum is .
As you can see, the minimal sum is  and the maximal sum is . Thus, we print these minimal and maximal sums as two space-separated integers on a new line.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int max(int a, int b){
    if(a>b){
       return a; 
    }
    
    return b;
        
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    long long  int *arr = (long long int *)malloc(sizeof(long long int) * 5);
    memset(arr, 0, sizeof(long long int) * 5);
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    arr[4] = e;
    
    // Here the number of nodes are given so it will go from 
    // 0 to 5.
    // This problem can be solved in O(n) by Kanaden's algorithm.
    // Since the input is given in scattered form so we would need
    // O(n) space to store it in array;
    long long int sum_so_far=0;
    long long int max_so_far = 0;
    long long int min = arr[0];
    long long int max_num = arr[0];
    
    // We will calculate min and max number and just subtract from 
    // Max. We could have used Kanaden's algorithm which is similar but just for simplicity,
    // we will use the same function
    for(int i=0; i<5; i++){
        
        if(min > arr[i]){
           min = arr[i];  
        }
        
        if(max_num < arr[i])
           max_num = arr[i];
      
        sum_so_far = sum_so_far + arr[i];
    }
 
    printf("%lld ", sum_so_far - max_num);
    printf("%lld ", sum_so_far - min);
    
    
    
    return 0;
}
