#pragma once
#define M 20
class Vacation
{
private:
	char Place[M];
	int time;

public:
	Vacation();
	~Vacation();
	void SetPlace(char *place);
	void SetTime(int time);
	char* GetPlace();
	int GetTime();
};