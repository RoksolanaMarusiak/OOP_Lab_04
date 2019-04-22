#include "Vacation.h"

class RestIn : public Vacation
{
private:

	double cost;
	double transport;
	double travelprice;
public:
	RestIn();
	~RestIn();
	void SetCost(double cost);
	void SetTransport(double transport);
	void SetTravelPrice(double travpl);
	double GetCost();
	double GetTransport();
	double GetTravelPrice();
};