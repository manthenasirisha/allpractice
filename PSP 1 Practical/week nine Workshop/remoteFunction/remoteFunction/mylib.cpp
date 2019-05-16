#include "pch.h"

void swapValues(int &a, int &b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}