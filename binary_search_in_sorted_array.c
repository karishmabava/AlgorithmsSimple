#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>


void reverse(int arr[], int d, int n){

	int temp;

	while(d < n){
		  temp = arr[d];
		  arr[d] = arr[n]; 
		  arr[n] = temp;
		  d++;
		  n--;
	}
}


void rotateArray(int *arr, int d, int n){

	reverse(arr, 0, d-1);
	reverse(arr, d, n);
	reverse(arr, 0, n);
}

int binary_search(int arr[], int start, int end, int key){

	if(start > end){
		return 0;
	}

	int mid = (start + end)/2;

	if( arr[mid] == key){
		return mid;
	} else if( arr[mid] > key ){
		return binary_search(arr, start, mid-1, key);
	} else {
		return binary_search(arr, mid+1, end, key);
	}

}

int pivot_elem(int arr[], int start, int end){

	if(start > end){
		return -1;
	}

	if(start == end){
		return start;
	} 

	int mid = (start + end)/2;
	if(mid < end && arr[mid] > arr[mid+1]){
	   return mid;
	}

	if(mid > start && arr[mid] < arr[mid-1]){
	   return mid-1;
	}
	if(arr[start] >= arr[mid]){
		return pivot_elem(arr, start, mid-1);
	}
	
    return pivot_elem(arr, mid+1, end);
}

int findElement(int arr[], int n, int k){

	int pivot = pivot_elem(arr, 0, n);

	// The array is not rotated at all
	if(pivot == -1){
		return binary_search(arr, 0, n, k);
	}

	if(arr[pivot] == k){
		return pivot;
	}

	if(arr[pivot] <= k){
	   return binary_search(arr, 0, pivot-1, k);		
	} else {
	   return binary_search(arr, pivot+1, n, k);
	}

	return 0;
}

void printArray(int arr[], int n){

	 if(n == 0){
		return;
	 }

	 for(int i=0; i<=n; i++){
		 printf("%d ", arr[i]);
	 }

	printf("\n");

}

int main(){

	int arr[] = {1,2,3,4,5,6,7};
	int n = 7;
	int d = 4;
	
	rotateArray(arr, d, n-1);
	printf("Rotated Array\n");
	printArray(arr, n-1);
	int m =4;
	int k = findElement(arr, n-1, m);
	
	if(k != -1){
		printf("ELement found at %d\n", k);
	} else {
		printf("Element couldnt be found\n");
	}

	return 1;
}
