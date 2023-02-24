//outside constucter

#include<iostream>
using namespace std;

class calculation
{
	int a,b,ans;
	
	public:
		calculation();
		void display();
		
};
calculation::calculation()
{
	cout<<"Enter Value of A : ";
	cin>>a;
	
	cout<<"Enter Value of B : ";
	cin>>b;
}

void calculation::display()
{
	cout<<"Addition : "<<a+b;
	cout<<"Substraction : "<<a-b;
	cout<<"Multiplication : "<<a*b;
	cout<<"Division : "<<a/b;
}
main()
{
	calculation c;
	c.display();
}
