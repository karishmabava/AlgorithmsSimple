/* Question: Given a square matrix of size , calculate the absolute difference between the sums of its diagonals.

Input Format

The first line contains a single integer, . The next  lines denote the matrix's rows, with each line containing space-separated integers describing the columns.

Constraints

Output Format

Print the absolute difference between the two sums of the matrix's diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     5
   4
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19 
Difference: |4 - 19| = 15

Note: |x| is absolute value function */

//===========SOLUTION APPROACH=====
/* Basically, in this question all we have to do is indexing 
 * of the matrix. How diagonals are realted to the max capacity
 * of the matrix. For instance, we have to see for matrix 3x3 
 * diagonal elements are 00,11,22 left side and 02,11,20 right side */
// ================================

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
    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++){
       for(int a_j = 0; a_j < n; a_j++){ 
          scanf("%d",&a[a_i][a_j]);
       }
    }
    
    int sum_1=0;
    for(int i=1; i<=n; i++){
        sum_1 += a[i-1][i-1];
    }    
    
    int sum_2 = 0, i, j;
    for(i=0, j=n-1; i<=n-1, j >= 0; i++,j--){
        sum_2 += a[i][j];
    }
    
    printf("%d", abs(sum_1-sum_2));
    return 0;
}
