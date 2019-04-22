#include "Vacation.h"
#include "RestIn.h"
#include <iostream>
#include <stdlib.h>

#define K 3
using namespace std;

void SetData(RestIn Obj[], const int amount);
void ShowData(RestIn Obj[], int amount);
double Sum(RestIn Obj[], int amount);
void Sort(RestIn Obj[], int amount);

int main(void)
{
	RestIn* List = new RestIn[K];
	double sum = 0;
	SetData(List, K);
	Sort(List, K);
	system("cls");
	cout << "Sorted: " << endl << endl;
	ShowData(List, K);
	cout << "Total sum of all vacations: " << (sum = Sum(List, K)) << endl;
	system("pause");
	return 0;
}
