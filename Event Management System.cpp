//Event Management System using C++

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	string n_event,c_name;	// Name of Event Customer Name
	double num_guest;	// Number of Guests
	int num_min;	// Total Number of Minutes in the event


	cout << "Enter the name of the event " << endl;
	getline(cin, n_event);
	cout << "Enter the customer's first and last name " << endl;
	getline(cin, c_name);
	cout << "Enter the number of guests " << endl;
	cin >> num_guest;
	cout << "\n\nEnter the number of minutes in the event " << endl;
	cin >> num_min;

	cout << "Event estimate for  " << c_name << endl;

	int NumberOfServers, Cost1;
	double CostForOneServer,Test, TotalFoodCost, Ave_Cost, Cost2, DepositAmount,TotalCost;

	const double CostPerHour = 18.50;
	const double CostPerMinute = .40;
	const double CostOfDinner = 20.70;

	// Get Number Of Servers
	Test = num_guest / 20;
	NumberOfServers = ceil(Test);

	// Get Cost Of One Server
	Cost1 = (num_min / 60) * CostPerHour;
	Cost2 = (num_min % 60) * CostPerMinute;
	CostForOneServer = Cost1 + Cost2;

	// Get Cost For Food
	TotalFoodCost = num_guest * CostOfDinner;

	// Get Average Cost Per Person
	Ave_Cost = TotalFoodCost / num_guest;

	//total amount
	TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

	//Deposit Amount 25%
	DepositAmount = TotalCost * .25;

	// Print values above
	cout << "Number Of Server: " << NumberOfServers << fixed << setprecision(2) << endl;
	cout << "The Cost for Servers: " << setw(5) << CostForOneServer << endl;
	cout << "The Cost for Food is: " << setw(5) << TotalFoodCost << endl;
	cout << "Avergae Cost Per Person: " << setw(5) << Ave_Cost << endl;
	cout << "\nTotal cost is: " << setw(5) << TotalCost << endl;

	cout << "Please deposite a 25% deposit to reserve the event" << endl;
	cout << "The deposit needed is: " << setw(5) << DepositAmount << endl;

	return 0;
}
