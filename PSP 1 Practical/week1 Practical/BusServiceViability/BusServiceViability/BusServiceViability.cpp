// BusServiceViability.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

// BusServiceViability.cpp : Defines the entry point for the console application.
//
/*
Algorithm to assess the business viability, of a new service route between two cities.

1) Let

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
#include <string>
#include <iostream>
using namespace std;
int main()
{

	return 0;
}
