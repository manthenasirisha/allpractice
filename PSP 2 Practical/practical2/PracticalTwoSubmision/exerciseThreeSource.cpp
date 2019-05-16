#include "pch.h"
#include <iostream>
#include "exerciseThreeHeader.h"
using namespace std;

int setA[6] = { 1,2,3,4,5,6 };

int setB[6] = { 1,2,3,7,8,9 };
/*--------------------------------------------------------
 Function name: belong
 input parameters
	@param element: element of a set
	@return return a boolen value based on if the element is present in the set or not
--------------------------------------------------------*/
//part1
bool belong(int element, char set) {

	if (set == 'A') {
		return checkIfPresent(element, setA);
	}
	else if (set == 'B') {
		return checkIfPresent(element, setB);
	}

	return false;

}

bool checkIfPresent(int element, int *set) {

	for (int i = 0; i < 6; i++) {
		if (set[i] == element) {
			return true;
		}
	}

	return false;
}
/*--------------------------------------------------------
 Function name: subset
 input parameters
	@param subset : The sub set to check if it is a sub sets of given set
	@param subsetLength : The length of the sub set
    @return return a boolen based on the given sub set is real a sub set of set
--------------------------------------------------------*/
//part2
bool subSet(int subset[], int subsetLength, char set) {

	if (set == 'A') {
		return subSetCheck(subset, subsetLength, setA);
	}
	else if (set == 'B') {
		return subSetCheck(subset, subsetLength, setB);
	}

	return false;
}

bool subSetCheck(int *subset, int subsetLength, int *set) {
	int count = 0;

	for (int j = 0; j < subsetLength; j++) {
		for (int i = 0; i < 6; i++) {
			if (subset[j] == set[i]) {
				count++;
			}
		}
	}

	return (count == subsetLength);
}
//part3
/*--------------------------------------------------------
 Function name: unionOfsets
@return unionset return the union of the sets A and B
--------------------------------------------------------*/
int * unionOfSets() {
	static int unionSet[12];// important this should be static here 
	int index = 0;

	for (int i = 0; i < 6; i++) {
		unionSet[index] = setA[i];
		index++;
	}

	for (int i = 0; i < 6; i++) {
		if (!belong(setB[i], 'A')) {
			unionSet[index] = setB[i];
			index++;
		}
	}
	return unionSet;
}
/*--------------------------------------------------------
 Function name: intersection
 
@return intersection returns the inter sets of the A and B
--------------------------------------------------------*/
//part4
int * intersection() {
	static int intersection[3];// important this should be static here 
	int index = 0;

	for (int i = 0; i < 6; i++) {
		if (belong(setB[i], 'A')) {
			intersection[index] = setB[i];
			index++;
		}
	}
	return intersection;
}
/*--------------------------------------------------------
 Function name: relativeComplement
 input parameters
	@param set :identifier of the set A or B
	
@return relativeComplent :  
--------------------------------------------------------*/
//part5
int * relativeComplement(char set) {
	static int relativeCompleent[3];// important this should be static here 
	int *intesectionSet = intersection();
	int index = 0;

	for (int i = 0; i < 6; i++) {
		bool present = false;
		if (set == 'A') {
			for (int j = 0; j < 3; j++) {
				if (intesectionSet[j] == 0) {
					continue;
				}
				if (intesectionSet[j] == setB[i]) {
					present = true;
					break;
				}

			}
			if (!present) {
				relativeCompleent[index] = setB[i];
				index++;
			}
		}
		else if (set == 'B') {
			for (int j = 0; j < 3; j++) {
				if (intesectionSet[j] == 0) {
					continue;
				}

				if (intesectionSet[j] == setA[i]) {
					present = true;
					break;
				}

			}
			if (!present) {
				relativeCompleent[index] = setA[i];
				index++;
			}
		}

	}
	return relativeCompleent;
}
/*--------------------------------------------------------
 Function name: symmetricDifference
@return symDiff
--------------------------------------------------------*/
//part6
int * symmetricDifference() {
	static int symDiff[6];// important this should be static here 
	int *relativeComplementOfA = relativeComplement('A');
	int index = 0;

	for (int i = 0; i < 3; i++) {
		if (relativeComplementOfA[i] != 0) {
			symDiff[index] = relativeComplementOfA[i];
			index++;
		}
	}
	int *relativeComplementOfB = relativeComplement('B');
	for (int i = 0; i < 3; i++) {
		if (relativeComplementOfB[i] != 0) {
			symDiff[index] = relativeComplementOfB[i];
			index++;
		}
	}

	return symDiff;
}