// dayType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "dayType.h"

using namespace std;

int main()
{
	dayType testDay;

	dayType error(8);

	//Testing the current day

	testDay.printDay();

	error.printDay();

}
