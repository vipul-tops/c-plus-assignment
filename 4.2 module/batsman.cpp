#include<iostream>
#include<string.h>
using namespace std;

class cricket
{
public :
	char name[20];
	int run,ini,best;
	void inputdata()
	{
	cout<<"Enter Batsman name ";
	cin>> name;
	cout<<"Enter Total Runs : ";
	cin>>run;
	
	cout<<"Enter Total Inings : ";
	cin>>ini;
	
	cout<<"Enter Best Performance Score : ";
	cin>>best;

	}
};
class batsman : public cricket
{
public :
	int avg;
    void getdata()
    {		
	avg=run/ini;
	
	cout<<"\nBatsman name : "<<name<<"\n Total Innings : "<<ini<<"\n Total Runs : "<<run<<"\n Best Score : "<<best<<"\nAverage Run : "<<avg;
    }
};
main()
{
	batsman b;
	b.inputdata();
	b.getdata();
}
