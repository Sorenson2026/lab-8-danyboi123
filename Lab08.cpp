//This program will process a sequence of integer values in the range of 1 through 10
//Daniel Parker 03/10/2026
//Its my brothers BirthDay!!!

#include <iostream>
#include <iomanip>

using namespace std;

//main function processing numbers from 1 through 10
int main()
{
	//define variables
	int num, numCount = 0, count, max = 0, min = 0, runTot = 0;
	float average;

	//greeting
	cout << "Enter numbers 1 through 10 for: amount entered, min, max, and average" << endl;

	//get first integer
	cout << "Enter an integer (0 to quit): ";
	cin >> num;
	
	//running total for average and numCount increment.
	if (num != 0)
	{
		runTot += num;
		numCount++;
		max = min = num;
	}
	
	//loop to check for quit sentinel and get new integers
	while (num != 0)
	{
		cout << "Enter another integer (0 to quit): ";
		cin >> num;
		
		//set new maxes and mins
		if (num > max)
			max = num;
		else if (num < min && num != 0)
			min = num;

		//running total for average and numCount increment.
		if (num != 0)
		{
			runTot += num;
			numCount++;
		}
	}
	//calculate average
	average = static_cast<float>(runTot) / numCount;
	cout << endl;

	//prevent divide by 0 error
	if (numCount == 0)
		average = 0;

	//output count, min, max, average
	cout << "Count Min  Max  Average" << endl;
	cout << setw(6) << left << numCount << setw(5) << left << min << setw(5) << left << max << setprecision(2) << average;

	return 0;
}