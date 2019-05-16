#include "pch.h"
#include <iostream>
#include "practicalThreeHeader.h"
using namespace std;

int numberOfSwapsForMergeSort = 0;
int numberOfComparisonsForMergeSort = 0;


//Exercise 2

//--------------------------------------------------------
// Function name:  bubbleSortWithLowerNumberFromEnd
// input parameters
//   @parm1: array to sort
//   @parm2: size of the array to sort
//--------------------------------------------------------
void bubbleSortWithLowerNumberFromEnd(int A[], int size)
{
	int numberOfSwaps = 0;
	int numberOfComparisons = 0;
	for (int i = 0 ; i < size - 1; i++) {
		for (int j = size - 1; j - 1 >= i; j--) {
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				numberOfSwaps++;
			}
			numberOfComparisons++;
		}
	}

	cout << "bubbleSortWithLowerNumberFromEnd::numberOfComparisons:" << numberOfComparisons << endl;
	cout << "bubbleSortWithLowerNumberFromEnd::numberOfSwaps:" << numberOfSwaps << endl;

 }
//--------------------------------------------------------
// Function name: swap
// input parameters
//   @parm1:swap the values
//--------------------------------------------------------
void swap(int &a,int &b) {

	int temp = a;
		a = b;
		b = temp;

}
//Exercise 3

//--------------------------------------------------------
// Function name: bubbleSort
// input parameters
//   @parm1: array to sort
//   @parm2: size of the array to sort
//--------------------------------------------------------

void bubbleSort(int A[], int size) {

	int numberOfSwaps = 0;
	int numberOfComparisons = 0;

	for (int i = 0; i <= size - 1; i++) {
		for (int j = 1; j  <= size - 1 - i ; j++) {
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				numberOfSwaps++;
			}
			numberOfComparisons++;
		}
	}
	cout << "bubbleSort::numberOfComparisons:" << numberOfComparisons << endl;
	cout << "bubbleSort::numberOfSwaps:" << numberOfSwaps << endl;

}

//--------------------------------------------------------
// Function name: insertionSort
// input parameters
//   @parm1: array to sort
//   @parm2: size of the array to sort
//--------------------------------------------------------

void insertionSort(int A[], int size) {

	int numberOfSwaps = 0;
	int numberOfComparisons = 0;

	for (int i = 0; i <= size - 1; i++) {
		for (int j = i; j - 1 >= 0 ; j--) {
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
				numberOfSwaps++;
			}
			numberOfComparisons++;
		}
	}

	cout << "insertionSort::numberOfComparisons:" << numberOfComparisons << endl;
	cout << "insertionSort::numberOfSwaps:" << numberOfSwaps << endl;

}

//--------------------------------------------------------
// Function name: selectionSort
// input parameters
//   @parm1: array to sort
//   @parm2: size of the array to sort
//--------------------------------------------------------

void selectionSort(int A[], int size) {
	int numberOfSwaps = 0;
	int numberOfComparisons = 0;

	for (int i = 0; i < size - 1; i++) {
		int minPositon = i;	
		for (int j = i + 1; j <= size - 1; j++) {
			if (A[minPositon] > A[j]) {
				minPositon = j;
			}
			numberOfComparisons++;
		}
		if (i != minPositon) {
			swap(A[i], A[minPositon]);
			numberOfSwaps++;
		}
	}

	cout << "selectionSort::numberOfComparisons:" << numberOfComparisons << endl;
	cout << "selectionSort::numberOfSwaps:" << numberOfSwaps << endl;

}

//--------------------------------------------------------
// Function name: display
// input parameters
//   @parm1: array to display
//   @parm2: size of the array to display
//--------------------------------------------------------

void display(int A[], int size) {

	for (int k = 0; k < size; k++) {
		cout << A[k] << " ";
	}
	cout << endl;
}
//Exercise 3

//--------------------------------------------------------
// Function name: merge
// input parameters
//   @parm1: input array A
//   @parm2: merge array from
//	 @parm3: merge array mid
//	 @parm4: merge array end
// Output paramenters
//--------------------------------------------------------

void merge(int *Arr, int start, int mid, int end) {
	
	int tempArraySize = end - start + 1;
	int* temp = new int[tempArraySize];

	int i = start, j = mid + 1, k = 0;

	while (i <= mid && j <= end) {
		if (Arr[i] <= Arr[j]) {
			temp[k] = Arr[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = Arr[j];
			k += 1; j += 1;
		}
	}

	while (i <= mid) {
		temp[k] = Arr[i];
		k += 1; i += 1;
	}

	while (j <= end) {
		temp[k] = Arr[j];
		k += 1; j += 1;
	}

	for (i = start; i <= end; i += 1) {
		Arr[i] = temp[i - start];
	}
}

//--------------------------------------------------------
// Function name: mergSort
// input parameters
//   @parm1: input array A
//   @parm2: start element to sort
//	 @parm3: end element of the array till sort

//--------------------------------------------------------

void mergeSort(int *Arr, int start, int end) {

	if (start < end) {
		int mid = (start + end) / 2;
		mergeSort(Arr, start, mid);
		mergeSort(Arr, mid + 1, end);
		merge(Arr, start, mid, end);
	}
}