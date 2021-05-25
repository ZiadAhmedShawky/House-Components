#include "houseType.h"
using namespace std;

void houseType::setStyle(string styly)
{
	style = styly;
}
string houseType::getStyle()
{
	return style;
}
void houseType::setNumberOfRooms(int rooms)
{
	NumberOfBedrooms = rooms;
}
int houseType::getNumberOfRooms()
{
	return NumberOfBedrooms;
}
void houseType::setNumberOfBathRooms(int rooms)
{
	NumberOfBathrooms = rooms;
}
int houseType::getNumberOfBathRooms()
{
	return NumberOfBathrooms;
}
void houseType::setNumberOfCarsGarage(int carGarage)
{
	NumberOfCarsGarage = carGarage;
}
int houseType::getNumberOfCarsGarage()
{
	return NumberOfCarsGarage;
}
void houseType::setYearBuilt(int year)
{
	YearBuilt = year;
}
int houseType::getYearbuilt()
{
	return YearBuilt;
}
void houseType::setFinishedSquareFootage(int FSF)
{
	FinishedSquareFootage = FSF;
}
int houseType::getFinishedSquareFootage()
{
	return FinishedSquareFootage;
}
void houseType::setprice(double price1)
{
	price = price1;
}
double houseType::getprice()
{
	return price;
}
void houseType::settax(double taxes)
{
	tax = taxes;
}
double houseType::gettax()
{
	return tax;
}