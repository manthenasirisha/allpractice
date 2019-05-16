// BUSservice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{


		float labourCost, fuelCost;
		float fuelCostPerUnit, cruiseSpeed;
		float fuelConsumptionRate, distanceBetweenCities;
		float totalTicketSale, ticketPricePerPerson, minNumberOfPassengers;
		float overheadCost, totalCost;
		float timeToTravelBetweentwoCities;
		float hourlyPayOfDriver;
		char driverstatus;
		char typeofcar, rodetype;

		cout << "Is it petrol car or disel car: ";
		cin >> typeofcar;

		if (typeofcar == 'P') {
			fuelCostPerUnit = 5;
		}
		else if (typeofcar == 'D') {
			fuelCostPerUnit = 6;
		}

		cout << "Enter the type of road ";
		cin >> rodetype;

		if (rodetype == 'A') {
			cruiseSpeed = 60;
		}
		else if (rodetype == 'M') {
			cruiseSpeed = 70;
		}

		cout << "Is the driver senior or junior :";
		cin >> driverstatus;

		if (driverstatus == 'S') {
			hourlyPayOfDriver = 40;
		}
		else if (driverstatus == 'J') {
			hourlyPayOfDriver = 15;
		}
		
		if (typeofcar == 'P') {
			fuelConsumptionRate = 15;
		}
		else if (typeofcar == 'D') {
			fuelConsumptionRate = 25;
		}

		cout << "Enter distance between two cities in miles :";
		cin >> distanceBetweenCities;

		cout << "Enter ticket price per person :";
		cin >> ticketPricePerPerson;

		cout << "Enter min no of passengers : ";
		cin >> minNumberOfPassengers;

		timeToTravelBetweentwoCities = distanceBetweenCities / cruiseSpeed;
		labourCost = hourlyPayOfDriver * timeToTravelBetweentwoCities;
		cout << "\n labour cost:" << labourCost;

		//calculate the fuel cost
		fuelCost = (distanceBetweenCities / fuelConsumptionRate) * fuelCostPerUnit;
		cout << "\n fuel cost:" << fuelCost;


		//calculate the total cost
		totalCost = labourCost + fuelCost;
		cout << "\n TOTAL COST:" << totalCost;

		//calculate the ticket price
		totalTicketSale = minNumberOfPassengers * ticketPricePerPerson;
		cout << "\n total Ticket saale:" << totalTicketSale;

		// calculate over head cost
		overheadCost = (20.0 / 100) * totalCost;

		cout << "\n total cost : ";
		cout << totalCost;
		cout << "\n overhead cost" << overheadCost;

		if (totalCost + overheadCost > totalTicketSale) {
			cout << "\n it's not viable ";
		}
		else {
			cout << "\n it's viable";
		}

		cout << endl;


		return 0;
	}

