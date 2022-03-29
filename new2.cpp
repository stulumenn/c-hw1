#include <iostream>

using namespace std;


int main()
{
	int numberOfBoxes = 1;
	char input;
	double weightInOunces = 0.0;
	double weightInMetricTons = 0.0;
	
	do
	{
		cout<< "Please enter the weight of a package in ounces.\n";
		cin>>weightInOunces;
		
		weightInMetricTons = weightInOunces / 35273.92;
		double temp = weightInMetricTons;
		
		while (weightInMetricTons < 1.0)
		{
			weightInMetricTons = weightInMetricTons + temp;
			numberOfBoxes++;
		}
		cout<<"Number of boxes is: ";
		cout<<numberOfBoxes;
		
		cout<<"\nTry again? y/n: ";
		cin>> input;
	} while (input == 'y');
	return 0;
}

