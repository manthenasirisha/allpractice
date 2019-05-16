#include "pch.h"

void swapValues(int &a, int &b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
float convertTemp(float temp)
{
	float celcius;

	celcius = (temp - 32) * 5 / 9;

	return celcius;
}