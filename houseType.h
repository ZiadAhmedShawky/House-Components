#pragma once
#include<string>
using namespace std;
class houseType
{
private:
	string style;
	int NumberOfBedrooms;
	int NumberOfBathrooms;
	int NumberOfCarsGarage;
	int YearBuilt;
	int FinishedSquareFootage;
	double price;
	double tax;
public:
	void setStyle(string);
	string getStyle();
	void setNumberOfRooms(int);
	int getNumberOfRooms();
	void setNumberOfBathRooms(int);
	int getNumberOfBathRooms();
	void setNumberOfCarsGarage(int);
	int getNumberOfCarsGarage();
	void setYearBuilt(int);
	int getYearbuilt();
	void setFinishedSquareFootage(int);
	int getFinishedSquareFootage();
	void setprice(double);
	double getprice();
	void settax(double);
	double gettax();

};

