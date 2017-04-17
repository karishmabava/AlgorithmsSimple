/*Question:

HackerLand University has the following grading policy:

Every student receives a  in the inclusive range from  to .
Any  less than  is a failing grade.
Sam is a professor at the university and likes to round each student's  according to these rules:

If the difference between the  and the next multiple of  is less than , round  up to the next multiple of .
If the value of  is less than , no rounding occurs as the result will still be a failing grade.
For example,  will be rounded to  but  will not be rounded because the rounding would result in a number that is less than .

Given the initial value of  for each of Sam's  students, write code to automate the rounding process. For each , round it according to the rules above and print the result on a new line.

Input Format

The first line contains a single integer denoting  (the number of students). 
Each line  of the  subsequent lines contains a single integer, , denoting student 's grade.

Constraints

Output Format

For each  of the  grades, print the rounded grade on a new line.

Sample Input 0

4
73
67
38
33
Sample Output 0

75
67
40
33
Explanation 0

image

Student  received a , and the next multiple of  from  is . Since , the student's grade is rounded to .
Student  received a , and the next multiple of  from  is . Since , the grade will not be modified and the student's final grade is .
Student  received a , and the next multiple of  from  is . Since , the student's grade will be rounded to .
Student  received a grade below , so the grade will not be modified and the student's final grade is .
*/

// Complexity O(n)

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int grades){
    // Complete this function
    int result=0;
    if(grades < 38){
       result = grades; 
    } else {
        
        int temp_reaminder =0;
        temp_reaminder   = grades%10;
        
        if(temp_reaminder < 5 &&  (5 - temp_reaminder) < 3){
            temp_reaminder = 5;
            result = (grades/10) * 10 + temp_reaminder;
           
        } else if(temp_reaminder > 5 && (10-temp_reaminder) < 3){
            temp_reaminder = 0; 
            result = (grades/10 + 1) * 10 + temp_reaminder; 
            
        } else {
            result = grades;
        }
    }        
      
    return result;
}

int main() {
    int n; 
    scanf("%d", &n);
    
    if(n > 60)
       return 0; 
    
    int *grades = malloc(sizeof(int) * n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
       int result = solve(grades[grades_i]);
       printf("%d\n", result); 
    }    
    return 0;
}
