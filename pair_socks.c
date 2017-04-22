/* Question: John's clothing store has a pile of  loose socks where each sock  is labeled with an integer, , denoting its color. He wants to sell as many socks as possible, but his customers will only buy them in matching pairs. Two socks, and , are a single matching pair if .

Given  and the color of each sock, how many pairs of socks can John sell?

Input Format

The first line contains an integer, , denoting the number of socks. 
The second line contains  space-separated integers describing the respective values of .

Constraints

Output Format

Print the total number of matching pairs of socks that John can sell.

Sample Input

9
10 20 20 10 10 30 50 10 20
Sample Output

3
Explanation

sock.png

As you can see from the figure above, we can match three pairs of socks. Thus, we print  on a new line. */

// Complexity O(n)
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int find_max(int *a, int n){
    int max = a[0];
    for(int i=1; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    
    return max;
}

int main(){
    int n; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    // Finding max
    int max = find_max(c, n);
    int hash[max];
    memset(hash, 0, max);
    
    int count = 0;
    
    // To understand the for loop, once we come to condition
    // hash[c[i]] == 1, means we have detected the C[i] and going to increase that 
    // Number so the pair is detected
    for(int i=0; i<n; i++){
        if(hash[c[i]] == 1){ 
            hash[c[i]] = 0;
            count += 1;
        } else {   
            hash[c[i]] = 1;
        }
    }

    printf("%d", count);
    return 0;
}

