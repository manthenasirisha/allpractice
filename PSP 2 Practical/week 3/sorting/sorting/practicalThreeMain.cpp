// sorting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "practicalThreeHeader.h"
using namespace std;



int main()
{
	//Exercise 1

    /*Bubble sort
	
	given an array A[] of size n
	for i = 0 to n - 1 do:
		for j = 0 to n - i - 1 do:
	     if A[j] > A[j+1]
	   swap elements in position j and j + 1.
-----------------------------------------------------------

	Insertion Sort
	
	given an array A[] of size n
	for i = 1 to i  <= n - 1 do:
		for j = i to j - 1 >= 0 do:
	     if A[j] < A[j - 1]
	   swap elements in position A[j], A[j - 1]
 ---------------------------------------------------------------
	
	Seletion sort
	
	given an array A[] of size n
	for i = 0 to i < n - 1 do:
		for j = i + 1 to j  <= n - 1 do
			if A[i] > A[j]
	   swap elements in position A[i], A[j]
	*/

	//Exercise 2

	int A[] = { 30, 40, 20,12,10 };
	bubbleSortWithLowerNumberFromTheEnd(A, 5);

	for (int k = 0; k < 5; k++) {
		cout << A[k] << " ";
	}
	

	// //Exercise 3

	/*int A[] = { 30,40,20,12,10 };

	 insertionSort(A, 5);

	 for (int k = 0; k < 5; k++) {
		 cout << A[k] << " ";
	 }*/
	/* int A[] = { 30,40,20,12,10 };
	 selectionSort(A, 5);

	 for (int k = 0; k < 5; k++) {
		 cout << A[k] << " ";
	 }
	 for (int k = 0; k < 5; k++)
	 {
		 cout << A[k] << " ";
	 }*/
	return 0;
}



