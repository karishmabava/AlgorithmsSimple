/* ============ Question========
Consider a staircase of size :
   #
  ##
 ###
####
Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.
Write a program that prints a staircase of size .

Input Format
A single integer, , denoting the size of the staircase.

Output Format
Print a staircase of size  using # symbols and spaces.

Note: The last line must have  spaces in it.
Sample Input
6 
Sample Output
     #
    ##
   ###
  ####
 #####
######
Explanation

The staircase is right-aligned, composed of # symbols and spaces, and has a height and width of .
=============================== */
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

// Time Complexity O(n)
int main(){
    int n; 
    scanf("%d",&n);
    
    // Building the string
    char *str = (char *)malloc(sizeof(char) * n);
    memset(str, 0, sizeof(char) * n);
    for(int i=0; i<n; i++){
        str[i] = '#';
    }
 
   // This problem is the classical example of printf padding
    // We will just adjust the string and the padding in spaces.
    int j=1;
    for(int i=n-1; i>=0; i--){
         printf("%*.*s%s", i, i, " ", "");
         printf( "%.*s\n", j, str);
         j++;
    }
    
    return 0;
}

