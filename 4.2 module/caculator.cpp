// WAP a program of Simple calculator using class

#include<iostream>
using namespace std;

class input
{
	public:
		int a,b;
		
		void inputdata()
		{
			cout<<"Enter Value of A : ";
			cin>>a;
			
			cout<<"Enter Value of B : ";
			cin>>b;
		}
};
class derived : public input
{
	public:
		
		void display()
		{
			cout<<"\n Addition : "<<a+b;
			cout<<"\n Substraction : "<<a-b;
			cout<<"\n Multiplication : "<<a*b;
			cout<<"\n Division : "<<a/b;
		}
	
};
main()
{
	derived d;
	d.inputdata();
	d.display();
}
