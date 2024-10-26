//This program will take an integer between from 1 - 7 and use that integer to output the days of the week
//

#include <iostream>
#include <string>

using namespace std;

class dayType
{
public:

	//Constructor

	dayType()
	{
		setDay(0);
	}

	dayType(int x)
	{
		setDay(x);
	}

	//Functions  

	//This function takes the user inputted integer from 0 - 6
	void setDay(int x)
	{
		if(x < 0 || x > 6)	//This makes sure that you set it to a integer in the range that the daysOfWeek array can use
		{
			cout << "You need to use an integer between 0 and 6, defaulting to sudnay" << endl;	//Output error message

			currentDay = 0;
		}
		else
		{
			currentDay = x;	//Setting the currentDay variable to the input value so it can index the array
		}
	}


	//This function uses the array and index variable to output the current day of the week
	void printDay()
	{
			cout << daysOfWeek[currentDay] << endl;
	}

	//This function returns the current day of the week using the array and index variable
	string returnDay()
	{
		return daysOfWeek[currentDay];
	}

	//This function iterates the day forwrd by 1
	string returnNextDay()
	{
		int counter = currentDay;	// used a local variable to make sure i dont change what day it currently is
		
		if (counter == 6)	//This makes it that the number loops back around
		{
			counter = 0;	//This loops it
		}
		else
		{
			counter = counter + 1;	//This addes it by one to iterate it forward
		}

		return daysOfWeek[counter];	//This returns the new day
	}
	
	//This function iterates the day backwards by 1
		string returnPrevDay()
	{
		int counter = currentDay;	// used a local variable to make sure i dont change what day it currently is
			
		if (counter == 0)	//This makes it that the nnumber loops back around
		{
			counter = 6;
		}
		else
		{
			counter = counter - 1;	//This subtracts it by one to iterate it backwards 
		}
		return daysOfWeek[counter];	//This returns the new day
	}

	//Takes a user inputted nonnegative integer and uses it to find what day of the week it would be if you added it to the current day of the week
	string calcDay(int x)
	{
		int counter = currentDay;	// used a local variable to make sure i dont change what day it currently isint counter
		
		if (x < 1)	//This makes sure the inputted integer is greater than 0
		{
			cout << "You cannot use a negative integer" << endl;	//This output lets the user know what they did wrong
		}
		else
		{
			for (int A = 0; A < x; A++)	//Loop for iterating how many days forward 
			{
				if (counter == 6)	//This makes it that the number loops back around
				{
					counter = 0;	//This loops it
				}
				else
				{
					counter = counter + 1;	//This addes it by one to iterate it forward
				}
			}

			return daysOfWeek[counter];	//Returns the day of the week
		}
	}

private:

	int currentDay;

	string daysOfWeek[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

};