// Q.3.BusService.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Algorithm to assess the business viability, of a new service route between two cities.

1)

labourCost is the Labour cost for the service between the 2 cities
fuelCost is the fuel cost for the service

distanceBetweenCities is the distance between two cities of service
hourlyPayOfDriver is the hourly rate to pay for the driver
fuelCostForUnit is the fuel cost for unit
fuelConsumptionRate is the fuel consumption rate of the bus
cruiseSpeed is the cruise speed of the bus

minNumberOfPassengers is the minimum number of passengers expected to travel
ticketPricePerPassenger is the ticket price per passenger


2) calculate the labour cost
 TimeToTravelBetweentwoCities = distanceBetweenCities / cruiseSpeed
 labourCost = hourlyPayOfDriver * TimeToTravelBetweentwoCities

3) calculate the fuel cost
 fuelCost =( distanceBetweenCities / fuelConsumptionRate) * fuelCostForUnit

 4)calculate the total cost
 totalCost = labourCost + fuelCost

 5)calculate the ticket price
 totalTicketSale = minNumberOfPassengers * ticketPricePerPassengers

6) calculate over head cost
 overHeadCost = 20/100 * totalCost

 7) check the viablety coondition

 if (totalCost + overHeadCost) > totalTicketCost then it's not viable
 Else it's viable


*/
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

	cout << "Enter fuel cost per litre : ";
	cin >> fuelCostPerUnit;

	cout << "Enter cruis speed miles/hour: ";
	cin >> cruiseSpeed;

	cout << "Enter driver cost in pounds per hour :";
	cin >> hourlyPayOfDriver;

	cout << "Enter fuel consumption in miles per litre: ";
	cin >> fuelConsumptionRate;

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
