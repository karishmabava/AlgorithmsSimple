/* Question: There are two kangaroos on an x-axis ready to jump in the positive direction (i.e, toward positive infinity). The first kangaroo starts at location  and moves at a rate of  meters per jump. The second kangaroo starts at location  and moves at a rate of  meters per jump. Given the starting locations and movement rates for each kangaroo, can you determine if they'll ever land at the same location at the same time?

Input Format

A single line of four space-separated integers denoting the respective values of , , , and .

Constraints

Output Format

Print YES if they can land on the same location at the same time; otherwise, print NO.

Note: The two kangaroos must land at the same location after making the same number of jumps.

Sample Input 0

0 3 4 2
Sample Output 0

YES
Explanation 0

The two kangaroos jump through the following sequence of locations:

Thus, the kangaroos meet after  jumps and we print YES.

Sample Input 1

0 2 5 3
Sample Output 1

NO
Explanation 1

The second kangaroo has a starting location that is ahead (further to the right) of the first kangaroo's starting location (i.e., ). Because the second kangaroo moves at a faster rate (meaning ) and is already ahead of the first kangaroo, the first kangaroo will never be able to catch up. Thus, we print NO.

Submissions: 65702
Max Score: 10
Difficulty: Easy
Rate This Challenge:
    
More
Current Buffer (saved locally, editable)     
*/

// Complexity O(n)
// There are two methods to do this problem, one is simple array.
// Another one is linked list.
// We have chosen simple array.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct index {
    int value;
    int index_val;
};

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
  
    int i, j; 
    int flag = 0;
    
    for(i=1, j=1; i<=10000, j<=10000; i++, j++){
        if(x1 == x2){
           flag = 1;
           break; 
        }
        
        x1 = x1+v1;
        x2 = x2+v2;
    }  
           
    if(flag == 1){
       printf("YES"); 
    } else {
        printf("NO");
    }      
    
    
    return 0;
}
