#include<iostream>
#include"houseType.h"
using namespace std;
int main()
{
	houseType house1;
	house1.setStyle("Cape Cod");
	house1.setNumberOfRooms(7);
	house1.setNumberOfBathRooms(8);
	house1.setNumberOfCarsGarage(4);
	house1.setYearBuilt(1998);
	house1.setFinishedSquareFootage(3);
	house1.setprice(100);
	house1.settax(12341);
	cout<<"the style of the room is  " << house1.getStyle()<<endl;
	cout<<"number of rooms in house is " << house1.getNumberOfRooms() << endl;
	cout << "number of bathrooms in the house is " << house1.getNumberOfBathRooms() << endl;
	cout << "number of cars which garage can occupied is " << house1.getNumberOfCarsGarage() << endl;
	cout << "the constraction year is " << house1.getYearbuilt() << endl;
	cout << "Finished Square Footage in " << house1.getFinishedSquareFootage() << " year" << endl;
	cout << "the price of this house is  " << house1.getprice() <<"  millions"<< endl;
	cout << "the taxes for this house is  " << house1.gettax() << " yearly" << endl;

}

