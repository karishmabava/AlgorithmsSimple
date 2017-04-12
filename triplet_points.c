/* Question: Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from  to  for three categories: problem clarity, originality, and difficulty.
We define the rating for Alice's challenge to be the triplet , and the rating for Bob's challenge to be the triplet .

Task is to find their comparison points by comparing  with ,  with , and  with .

If , then Alice is awarded  point.
If , then Bob is awarded  point.
If , then neither person receives a point.
Comparison points is the total points a person earned.

Given  and , can you compare the two challenges and print their respective comparison points?

Input Format

The first line contains  space-separated integers, , , and , describing the respective values in triplet . 
The second line contains  space-separated integers, , , and , describing the respective values in triplet .

Constraints

Output Format

Print two space-separated integers denoting the respective comparison points earned by Alice and Bob.

Sample Input

5 6 7
3 6 10
Sample Output

1 1 
Explanation

In this example:

Now, let's compare each individual score:

, so Alice receives  point.
, so nobody receives a point.
, so Bob receives  point.
Alice's comparison score is , and Bob's comparison score is . Thus, we print 1 1 (Alice's comparison score followed by Bob's comparison score) on a single line. */

// COMPLECITY: O(n)
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    
    int a[3] = {0};
    int b[3] = {0};

    // Filling the 'a' numbers, since we have given three static number
    // so we have to manually fill it.
    a[0] = a0;
    a[1] = a1;
    a[2] = a2;
    
    // Filling the 'b' numbers, since we have given three static number
    // so we have to manually fill it. 
    b[0] = b0;
    b[1] = b1;
    b[2] = b2;
    
    int a_points[3] = {0}; // We already know it is going to be triplet always
    int b_points[3] = {0}; // We already know it is going to be triplet always
    
    for(int i=0; i<3; i++){
         if(a[i] > b[i]){
            a_points[i] = 1; 
         } else if(b[i] > a[i]){
            b_points[i] = 1;
         } else {
             a_points[i]=0;
             b_points[i]=0;
         }
     }
    
    
    int sum=0;
    for(int i=0; i<3; i++){
        sum = sum+a_points[i];   
    }
    
    printf("%d ", sum);
    sum=0;
    
    for(int i=0; i<3; i++){
        if(b_points[i] != 0){
           sum += b_points[i];
        }
    }
    printf("%d", sum);
    return 0;
}

