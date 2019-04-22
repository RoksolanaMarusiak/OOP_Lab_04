#include "Vacation.h"
#include "RestIn.h"
#include <string.h>
#include <iostream>

using namespace std;

void SetData(RestIn Obj[], const int amount)
{
	
	int time;
	double dayprice = 0, trans = 0, travel_price = 0;
	char place[20] = "", currency[5] = { 0 };
	for (int i = 0; i < amount; i++)
	{

		cout << "Vacation number " << (i + 1) << endl;
		cout << "Input place" << endl;
		cin >> place;
		Obj[i].SetPlace(place);
		cout << "Enter the duration (in days):" << endl;
		cin >> time;
		Obj[i].SetTime(time);
		cout << "Enter the price for one day:" << endl;
		cin >> dayprice;
		Obj[i].SetCost(dayprice);
		cout << "Enter the price for the transport:" << endl;
		cin >> trans;
		Obj[i].SetTransport(trans);
		travel_price = (Obj[i].GetTime() * Obj[i].GetCost() + Obj[i].GetTransport());
		cout << "Enter currency:" << endl;
		cin >> currency;
		cout << endl;
		if (strcmp(currency, "USD") == 0) //covnert to UAH
		{
			travel_price *= 26;
		}
		if (strcmp(currency, "EUR") == 0)
		{
			travel_price *= 29;
		}
		if (strcmp(currency, "RUR") == 0)
		{
			travel_price /= 4;
		}
		Obj[i].SetTravelPrice(travel_price);
	}
}

void ShowData(RestIn Obj[], int amount)
{
	for (int i = 0; i < amount; i++)
	{
		cout << "---------------------------------------------" << endl;
		cout << "Vacation number " << (i + 1) << endl << endl;
		cout << "Place: " << Obj[i].GetPlace() << endl;
		cout << "Duration: " << Obj[i].GetTime() << endl;
		cout << "Price for one day: " << Obj[i].GetCost() << endl;
		cout << "Price for the transport: " << Obj[i].GetTransport() << endl;
		cout << "Total price: " << Obj[i].GetTravelPrice() << endl << endl;
	}
}

double Sum(RestIn Obj[], int amount)
{
	double sum = 0;
	for (int i = 0; i < amount; i++)
	{
		sum += Obj[i].GetTravelPrice();
	}
	return sum;
}

void Sort(RestIn Obj[], int amount)
{
	RestIn tmp;
	for (int i = 1; i < amount; i++)
	{
		for (int j = i; j > 0 && Obj[j - 1].GetTravelPrice() > Obj[j].GetTravelPrice(); j--)
		{
			tmp = Obj[j];
			Obj[j] = Obj[j - 1];
			Obj[j - 1] = tmp;
		}
	}
}