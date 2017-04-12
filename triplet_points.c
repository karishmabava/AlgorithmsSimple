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

