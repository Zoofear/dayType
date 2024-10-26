// dayType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dayType.h"

using namespace std;

int main()
{
	
	//0 = sunday, 1 = monday, 2 = tuesday, 3 = wednesday, 4 = thursday, 5 = friday, 6 = saturday
	
	dayType testDay;

	cout << "testing using an improper parameter for the dayType object" << endl;
	
	dayType error(8);

	
	//Testing the current day

	cout << "Outputting the current day of two dfferent dayType objects" << endl;
	
	testDay.printDay();

	error.printDay();

	//Testing the returnNextDay and returnPrevDay function
	
	cout << "testing the returnNextDay function" << endl;
	string x = testDay.returnNextDay();
	cout << x << endl;

	cout << "testing the returnPrevDay function" << endl;
	x = testDay.returnPrevDay();
	cout << x << endl;

	//Testing out setDay and calcDay

	cout << "testing the setDay function" << endl;

	error.setDay(1);

	error.printDay();

	testDay.setDay(2);

	testDay.printDay();

	cout << "testing the calcDay function" << endl;

	x = error.calcDay(4);

	cout << "They day " << x << " should be friday" << endl;

	x = testDay.calcDay(13);

	cout << "They day " << x << " should be monday" << endl;
}
