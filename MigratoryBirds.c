/* Question:
A flock of  birds is flying across the continent. Each bird has a type, and the different types are designated by the ID numbers , , , , and .

Given an array of  integers where each integer describes the type of a bird in the flock, find and print the type number of the most common bird. If two or more types of birds are equally common, choose the type with the smallest ID number.

Input Format

The first line contains an integer denoting  (the number of birds). 
The second line contains  space-separated integers describing the respective type numbers of each bird in the flock.

Constraints

It is guaranteed that each type is , , , , or .
Output Format

Print the type number of the most common bird; if two or more types of birds are equally common, choose the type with the smallest ID number.

Sample Input 0

6
1 4 4 4 5 3
Sample Output 0

4
Explanation 0

The different types of birds occur in the following frequencies:

Type :  bird
Type :  birds
Type :  bird
Type :  birds
Type :  bird
The type number that occurs at the highest frequency is type , so we print  as our answer.*/

/* Solution: This question requires to just calculate the max number of occurence. If there is a number which is coming more than one time then the "smallest" condition will alwways pick up the first element */
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
   
    int *types = malloc(sizeof(int) * n);
    for(int types_i = 0; types_i < n; types_i++){
       scanf("%d",&types[types_i]);
    }

    int hash[5] = {0};
    
    for(int i=0; i<n; i++){
        hash[types[i]-1] += 1;
    }
    
    int max = hash[0], count=0, temp=0;
    for(int i=1; i<5; i++){
        if(max < hash[i]){
            max = hash[i]; 
            count = i+1;
        }
    }
    
    printf("%d", count);
    // your code goes here
    return 0;
}

