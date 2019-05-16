#include "pch.h";
#include <iostream>
using namespace std;

float calculateTheSurfaceArea(float leangth, float diameter)
{

	float surfaceArea;

	surfaceArea = leangth * diameter * (22.0 / 7);

	return surfaceArea;
}


string categoriseAgeIntoAnAgeGroup(int age)
{
	string category;

	if (age >= 60) {
		 category = "senior";
	}
	else if (age >= 30) {
		category = "adult";
	}
	else if (age >= 20) {
		category = "young";

	}
	return category;
}

void Swapvalues(int &value1, int &value2)
{
	int temp;
	temp = value1;
	value1 = value2;
	value2 = temp;
}

int calculateTheValueOfXpowerN(int x, int n)
{
	int value = 1;

	for (int i = 1; i <= n; i++) {

		value = value * x;
	}
	return value;
}