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
		setDay(1);
	}

	dayType(int x)
	{
		setDay(x);
	}

	//Functions

	//This function takes the user inputted integer from 1 - 7
	void setDay(int x)
	{
		if (x < 1 || x > 7)	//This makes sure that you set it to a integer in the range that the daysOfWeek array can use
		{
			cout << "You need to use an integer between 1 and 7" << endl;	//Output error message
		}
		else
		{
			currentDay = x;	//Setting the currentDay variable to the input value so it can index the array
		}
	}

	//This function uses the array and index variable to output the current day of the week
	void printDay()
	{
		cout << daysOfWeek[currentDay];
	}

	//This function returns the current day of the week using the array and index variable
	string returnDay()
	{
		return daysOfWeek[currentDay];
	}

	//This function iterates the day forwrd by 1
	string returnNextDay()
	{
		if (currentDay = 7)	//This makes it that the number loops back around
		{
			currentDay = 1;	//This loops it
		}
		else
		{
			currentDay = currentDay + 1;	//This addes it by one to iterate it forward
		}

		return daysOfWeek[currentDay];	//This returns the new day
	}
	
	//This function iterates the day backwards by 1
		string returnPrevDay()
	{
		if (currentDay = 1)	//This makes it that the nnumber loops back around
		{
			currentDay = 7;	//This loops it
		}
		else
		{
			currentDay = currentDay - 1;	//This subtracts it by one to iterate it backwards 
		}

		return daysOfWeek[currentDay];	//This returns the new day
	}

	//Takes a user inputted nonnegative integer and uses it to find what day of the week it would be if you added it to the current day of the week
	string calcDay(int x)
	{
		if (x <= 0)	//This makes sure the inputted integer is greater than 0
		{
			cout << "You cannot use a negative integer" << endl;	//This output lets the user know what they did wrong
		}
		else
		{
			for (int A = 0; A < x; A++)	//Loop for iterating how many days forward 
			{
				if (currentDay = 7)		//This makes it that the nnumber loops back around
				{
					currentDay = 1;		//This loops it
				}
				else
				{
					currentDay = currentDay + 1;	//This addes it by one to iterate it forward
				}
			}

			return daysOfWeek[currentDay];	//Returns the day of the week
		}
	}

private:

	int currentDay;

	string daysOfWeek[7];
};