/* Question: Marie invented a Time Machine and wants to test it by time-traveling to visit Russia on the Day of the Programmer (the  day of the year) during a year in the inclusive range from  to .

From  to , Russia's official calendar was the Julian calendar; since  they used the Gregorian calendar system. The transition from the Julian to Gregorian calendar system occurred in , when the next day after January  was February . This means that in , February  was the  day of the year in Russia.

In both calendar systems, February is the only month with a variable amount of days; it has  days during a leap year, and  days during all other years. In the Julian calendar, leap years are divisible by ; in the Gregorian calendar, leap years are either of the following:

Divisible by .
Divisible by  and not divisible by .
Given a year, , find the date of the  day of that year according to the official Russian calendar during that year. Then print it in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is .

Input Format

A single integer denoting year .

Constraints

Output Format

Print the full date of Day of the Programmer during year  in the format dd.mm.yyyy, where dd is the two-digit day, mm is the two-digit month, and yyyy is .

Sample Input 0

2017
Sample Output 0

13.09.2017
Explanation 0

In the year , January has  days, February has  days, March has  days, April has  days, May has days, June has  days, July has  days, and August has  days. When we sum the total number of days in the first eight months, we get . Day of the Programmer is the  day, so then calculate  to determine that it falls on day  of the  month (September). We then print the full date in the specified format, which is 13.09.2017.

Sample Input 1

2016
Sample Output 1

12.09.2016
Explanation 1

Year  is a leap year, so February has  days but all the other months have the same number of days as in . When we sum the total number of days in the first eight months, we get . Day of the Programmer is the  day, so then calculate  to determine that it falls on day  of the  month (September). We then print the full date in the specified format, which is 12.09.2016. */

/* Solution: One thing is certain, the question itself gave us an answer with which date to use for less than 1917, for 1918 and for 1919 and onwards, we
 * just have to calculate if the year was leap year or not then strcat it */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* solve(int year){
    // Complete this function
    
    
    char *s = (char *)malloc(200);
    memset(s, 0, 200);
    
    char *temp = (char *)malloc(50);
    memset(temp, 0, 50);
    snprintf(temp, 5, "%d", year);
    
    /* There is one thing certain, that if the year is leap year
     * then the date will be 12.09.xxxx and for non leap year, it would be
     * 13.09.xxxx, we have criteria for checking leap year till 1917, 1918 and after 1918
     */
    if(year <= 1917){
       if(year%4 == 0){
          strcat(s, "12.09."); 
       } else {
          strcat(s, "13.09."); 
       } 
    } else if( year == 1918){
          strcat(s, "26.09."); // Predetermined by 31+13+31+30+31+30....
    } else {
        if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
            strcat(s, "12.09.");
        } else {
            strcat(s, "13.09."); 
        }
    }
    
    strcat(s, temp);
    
    // Done with temp so free it
    free(temp);
    return s;
}

int main() {
    int year; 
    scanf("%d", &year);
    int result_size;
    char* result = solve(year);
    printf("%s\n", result);
    
    // Done with result so free it
    free(result);
    return 0;
}

