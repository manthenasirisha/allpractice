// practicalThreemain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "practicalThreeHeader.h"

int main()
{
	//Exercise 1

		/*Bubble sort

		given an array A[] of size n
		for i = 0 to n - 1 do i++
			for j = 0 to n - i - 1 do j++
			 if A[j] > A[j+1]
		   swap elements in position j and j + 1.
		-----------------------------------------------------------

			Insertion Sort

			given an array A[] of size n
			for i = 1 to i  <= n - 1 do i++
				for j = i to j - 1 >= 0 do j--
				 if A[j] < A[j - 1]
			   swap elements in position A[j], A[j - 1]
		 ---------------------------------------------------------------

			Seletion sort

			given an array A[] of size n
			for i = 0 to i < n - 1 do i++:
				for j = i + 1 to j  <= n - 1 do j++
					if A[i] > A[j]
			   swap elements in position A[i], A[j]
			
			*/

	//Exercise 2

	//int A[] = { 30, 40, 20, 12, 10, 33 ,23, 19, 22, 16, 99, 100, 85, 94, 66, 23 };
	int A[] =  { 100, 99, 94, 85, 66, 40, 33, 30, 23, 22, 20, 19, 16, 12, 10, 9 };

	bubbleSortWithLowerNumberFromEnd(A, 16);

	display(A , 16);
	cout << endl;

	//Exercise 3

	//bubble sort

	//int B[] = { 30, 40, 20, 12, 10, 33 ,23, 19, 22, 16, 99, 100, 85, 94, 66, 23 };
	int B[] = { 100, 99, 94, 85, 66, 40, 33, 30, 23, 22, 20, 19, 16, 12, 10, 9 };
	
	bubbleSort(B, 16);

	display(B, 16);
	cout << endl;

	//insertion sort

	//int C[] = { 30, 40, 20, 12, 10, 33 ,23, 19, 22, 16, 99, 100, 85, 94, 66, 23 };
	int C[] = { 100, 99, 94, 85, 66, 40, 33, 30, 23, 22, 20, 19, 16, 12, 10, 9 };

	insertionSort(C, 16);

	display(C, 16);
	cout << endl;

	//seletion sort

	//int D[] = { 30, 40, 20, 12, 10, 33 ,23, 19, 22, 16, 99, 100, 85, 94, 66, 23 };
	int D[] = {  100, 99, 94, 85, 66, 40, 33, 30, 23, 22, 20, 19, 16, 12, 10, 9 };

	selectionSort(D, 16);

	display(D, 16);
	cout << endl;
	

	//Exercise 4
	// merge sort

	//int E[] = { 30, 40, 20, 12, 10, 33 ,23, 19, 22, 16, 99, 100, 85, 94, 66, 23 };
	int E[] = { 100, 99, 94, 85, 66, 40, 33, 30, 23, 22, 20, 19, 16, 12, 10, 9 };

	mergeSort(E, 0, 15);

	display(E, 16);

	cout << endl;

	return 0;
}

