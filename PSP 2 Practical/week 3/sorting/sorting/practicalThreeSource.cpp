#include "pch.h"
#include <iostream>
#include "practicalThreeHeader.h"
using namespace std;

void bubbleSortWithLowerNumberFromTheEnd(int A[], int size) {
	
	for (int i = 0; i < size - 1; i++) {
		for (int j = size - 1; j - 1 >= i; j--) {
			if (A[j] > A[j - 1]) {
				swap(A[j], A[j - 1]);
			}
		}
	}
}
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void insertionSort(int A[], int size) {
	for (int i = 1; i <= size - 1; i++) {
		int	j = i;
		while (j > 0 && A[j] < A[j - 1]) {
			swap(A[j], A[j - 1]);
		}
	}
}
void selectionSort(int A[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int smallpos = i;
		for (int j = i + 1; j < size; j++) {
			if (smallpos != i)
				Swap(A[i], A[smallpos]);
		}
	}
}
void shellSort(int A[], int size) {

}