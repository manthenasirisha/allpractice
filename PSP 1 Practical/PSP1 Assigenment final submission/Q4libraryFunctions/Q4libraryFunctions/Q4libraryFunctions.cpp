// Q4libraryFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
4.(a)Develop a function that returns the sum of the proper divisors of a given integer.
Proper divisors of an integer n are the positive divisors that are less than n.
For instance, the proper divisors 8 are 1, 2, and 4, and hence the sum of them is 7.
The proper divisors for 6 are 1, 2 and 3, and hence the sum of them is 6.

Analysis:

1)	Take an integer number as input.
2)	Find divisors of input.
3)	Calculate the sum of all the divisors.
4)	Return the sum.

Example: 1 :
	Input = 15
	Divisors are 1, 3, 5.
	Sum = 9.
	Return sum.
	________________________________________
   PSEUDOCODE
	START
	1) read the number from the user
	2)

	let sumOfDevisors = 0;
for (int i = 1; i <= number / 2; i++) {
	if number % i == 0
		sumOfDevisors = sumOfDevisors + i;
}
print sumOfDevisors;
END
*/
/*
4.(b)Develop a function to test if a given positive integer is deficient, perfect or abundant.
A positive integer is said to be a deficient, perfect or abundant number if the sum of its proper divisors is less than,
equal to, or greater than the number.For instance, 8 is deficient because the sum of its proper divisors 1 + 2 + 4 < 8; 6 is perfect
because 1 + 2 + 3 = 6; and 12 is abundant because 1 + 2 + 3 + 4 + 6 > 12 (NB: be aware that you need to make use of the function developed for exercise(a)).

Analysis:

1)	Calculate the sum of divisors of the given number using the function define as part of 4a.
2)	Compare the above sum with the given number.
a)	If given number is less than sum then the number is abundant.
b)	If given number is greater than sum then the number is deficient.
c)	If given number is equal to sum then the number is perfect.

Examples :
1.	input = 8.
Output = deficient.
2.   Input = 6.
Output = perfect.
3.  Input = 12.
Output = abundant.
________________________________________

PSEUDOCODE
START
1) Read the number from the user
2) calculate the sumOfDevisors using the 4a procedure
3) if sumOfDevisors is less than number
then print the number is deficient
else sumOfDevisors is equal to the number
then print the number is perfect
else
the print number is abundant
END
*/
/*
4.(c)The xnor is a logic operation and a complement of an exclusive or (xor) operation.
It can be applied to two binary strings of equal length where between two corresponding bits,
1 xnor 1 = 1, 1 xnor 0 = 0, 0 xnor 1 = 0 and 0 xnor 0 = 1. For instance, 1101011 xnor 1010101 = 1000001.
Add a recursive function that takes two integer parameters simulating the two input binary numbers and returns the result of the xnor operation as an integer.
Analysis:

1.	Read two binary strings of equal length.
2.	Apply the xnor operator on the 2 input binary strings.

Examples :

	1.	For a input : 0101

	0011
	Output : 1001
	2.   For a input : 1101011
	1010101
	Output    1000001.
_______________________________________
	PseudoCode :
START

calculateXnor(int number1, int number2) {

	if number1 != 0 AND number2 != 0 {

		calculateXnor(number1 / 10, number2 / 10);

		rem1 = number1 % 10;
		rem2 = number2 % 10;

		if (rem1 == rem2) {
			print 1
		}
		else {
			print 0
		}
	} else {
		return;
	}

}
END
*/

/*
4.(d)Define a function that reverses the digits of a given positive integer.For instance, integer 123 becomes 321 after reversing.
(NB: a recursive function receives more credit than an iterative function.)
ANALYSIS:

1.	Given an input integer, return the reverse of the integer.
Examples :

	Input : 123
	Output : 321
	Input : 456
	Output : 654
________________________________________

	PSEUDOCODE
	START
	1) Read the number to reverse
	2)
   let reveserNumber = 0;
while number is not 0
do {
	remainder = number % 10
		number = number / 10
		reveserNumber = reveserNumber * 10 + remainder
}
print reveserNumber
END
*/

#include "pch.h"
#include "Q4.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{

	int  option;

	do {
		cout << "\n-------------------------------------------------------------------\n";

		cout << " Please choose one option below :" << endl;
		cout << " 1.calculate sum of divisors " << endl;
		cout << " 2.calculate the number deficient OR perfect OR abundant; " << endl;
		cout << " 3.Calculate the xnor " << endl;
		cout << " 4.calculate the reverse number " << endl;
		cout << " 5.To exit " << endl;

		cout << "Enter Option : ";
		cin >> option;

		cout << "\n-------------------------------------------------------------------\n";

		// 4a
		switch (option) {
			case 1: {
				int number1;
				int deficient, perfect, abundant;

				cout << " Enter the number : ";
				cin >> number1;

				int sumOfDivisors = calculateTheSumOfDivisors(number1);

				cout << " Sum of divisors is : " << sumOfDivisors << endl;

				break;
			}
			case 2: {
				// 4b
				int number2;

				cout << " Enter the number : ";
				cin >> number2;

				string positiveInteger = calculateThePositiveIntegerIsDeficientPerfectORabundant(number2);

				cout << " Given positive integer is : " << positiveInteger << endl;

				break;
			}
			case 3: {
				// 4c
				int number3, number4;

				cout << " Enter the number 1 and number 2 with space : ";
				cin >> number3 >> number4;

				calculateTheXnor(number3, number4);

				break;
			}
			case 4: {
				// 4d
				int number, reverseNumber;

				cout << " Enter the number : ";
				cin >> number;

				reverseNumber = calculateTheReverseNumber(number);

				cout << " Reverse Number is : " << reverseNumber;
				break;
			}
			default: {
				break;
			}
		}

	} while (option != 5);


}


