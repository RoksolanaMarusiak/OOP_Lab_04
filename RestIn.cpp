#include "Vacation.h"
#include "RestIn.h"

RestIn::RestIn()
{
	this->cost = 0;
	this->transport = 0;
}

void RestIn::SetCost(double cost)
{
	this->cost = cost;
}

void RestIn::SetTransport(double transport)
{
	this->transport = transport;
}

void RestIn::SetTravelPrice(double travpl)
{
	this->travelprice = travpl;
}

double RestIn::GetCost()
{
	return this->cost;
}

double RestIn::GetTransport()
{
	return this->transport;
}

double RestIn::GetTravelPrice()
{
	return this->travelprice;
}
RestIn::~RestIn()
{
}