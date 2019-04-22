#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include "Vacation.h"

#define M 20
Vacation::Vacation()
{
	Place[M] = { 0 };
	this->time = 0;
}

void Vacation::SetPlace(char *place)
{
	for (int i = 0; i < 20; i++)
	{
		this->Place[i] = place[i];
	}
}

void Vacation::SetTime(int time)
{
	this->time = time;
}

char* Vacation::GetPlace()
{
	return this->Place;
}

int Vacation::GetTime()
{
	return this->time;
}

Vacation::~Vacation()
{
}