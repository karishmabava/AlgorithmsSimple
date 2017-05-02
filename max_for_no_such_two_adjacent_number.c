/* Question: Given an array of positive numbers, find the maximum sum of a subsequence with the constraint that no 2 numbers in the sequence should be adjacent in the array. So 3 2 7 10 should return 13 (sum of 3 and 10) or 3 2 5 10 7 should return 15 (sum of 3, 5 and 7).Answer the question in most efficient way.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int FindMaxSum(int arr[], int n){

	int sum_even = 0;
	int sum_odd = 0;
	for(int i=0; i<n; i++){
		if(i%2 == 0){
		   sum_even = sum_even + arr[i];
		} else {
		   sum_odd = sum_odd + arr[i];
		}
	}
	
	if(sum_even > sum_odd){
		return sum_even;
	} else {
		return sum_odd;
	}

}

int main()
{
  int arr[] = {5, 5, 10, 100, 10, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("%d \n", FindMaxSum(arr, 6));
  return 0;
}
