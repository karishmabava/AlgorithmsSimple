// Algorithm: we will use the reverse algorithm.
// Rotate an array by 0 to d-1 elements.
// Rotate an array by d to n-1 elements
// Rotate an array by 0 to n-1 elements.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

	printf("\n");
}

void reverse(int arr[], int start, int end){

	int temp;
	if(start > end){
		return;
	}	
	
	while(start < end){
		  temp = arr[end];
		  arr[end] = arr[start];
		  arr[start] = temp;
		  start++;
		  end--;
	}


}

void rotateArray(int arr[], int n, int d){
	
	 reverse(arr, 0, d-1);
	 reverse(arr, d, n-1);
	 reverse(arr, 0, n-1);
}

int main(){

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = 7;
	int d = 2;

	rotateArray(arr, n, d);
	
	printArray(arr, n);

	return 1;
}
