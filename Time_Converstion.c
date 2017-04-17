/* Given a time in -hour AM/PM format, convert it to military (-hour) time.

Note: Midnight is  on a -hour clock, and  on a -hour clock. Noon is  on a -hour clock, and  on a -hour clock.

Input Format

A single string containing a time in -hour clock format (i.e.:  or ), where  and .

Output Format

Convert and print the given time in -hour format, where .

Sample Input

07:05:45PM
Sample Output

19:05:45 */

// Complexity O(n)
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    memset(time, 0, 10240 * sizeof(char));
    scanf("%s",time);
    
    int len = strlen(time);
    
    char temp[3];
    memset(temp, 0, 3);
    temp[0] = time[len-2];
    temp[1] = time[len-1];
    temp[3] = '\0';
    
    
    char snum[5] = {"\0"};
    int temp_num_1;
    int temp_num_2;
    
    snum[0] = time[0];
    snum[1] = time[1];
   
   // If the clock is at 12 and AM then we have to make it special case  
   if(strcmp(temp, "AM") == 0 && snum[0] == '1' && snum[1] == '2'){  
      snum[0] = '0';
      snum[1] = '0'; 
   }    
       
   // Converting PM to appropriate time 
   if(strcmp(temp, "PM") == 0){
       temp_num_1 = snum[0] - '0';
       temp_num_2 = snum[1] - '0';
       temp_num_1 = temp_num_1 * 10 + temp_num_2;
       
       if(temp_num_1 != 12)
          temp_num_1 = 12 + temp_num_1; 
         
         if(temp_num_1 > 24)
            temp_num_1 = temp_num_1 - 24; 
       
       memset(snum, 0, 5);
       
       snum[0] = (temp_num_1/10) + '0'; 
       snum[1] = (temp_num_1%10) + '0';  
       snum[2] = '\0'; 
    }
    
    time[0] = snum[0];
    time[1] = snum[1];
    
    time[len-2] = '\0';
    
    printf("%s", time);
    
    return 0;
}

