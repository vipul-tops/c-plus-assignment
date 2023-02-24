//represent a bank account

#include<iostream>
using namespace std;

class member
{
	public:
	int acno,balance;
	char name[30],type[30];
		
			void inputData()
			{
				cout<<"Enter Account Number : ";
				cin>>acno;
				fflush(stdin);
				cout<<"Enter Name of Depositor : ";
				gets(name);
				
				cout<<"Enter Type of Account : ";
				gets(type);
				
				cout<<"Enter Balance : ";
				cin>>balance;
				
				
				
			}
};
class function : public member
{
	
	public:
		int dep,with,ans,ans1;
		void getData()
		{
			cout<<"\n Enter Deposite Amount : ";
			cin>>dep;
			ans=balance+dep;
			cout<<"\n TOtal Balance : "<<ans;
			
			
			cout<<"\n Enter Amount for Withdraw : ";
			cin>>with;
			ans1=ans-with;
			
			cout<<"\n Total Balance  : "<<ans1;
			
		}
		void display()
		{
			cout<<" \n Name : "<<name;
			cout<<" \n Balance : "<<ans1;
		}
};
main()
{
	function f;
	f.inputData();
	f.getData();
	f.display();
}
