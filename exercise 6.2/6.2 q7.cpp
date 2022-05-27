#include<iostream>
using namespace std;
double totamt(double quarters,double dimes,double nickels,double pennies)
{
	double dol = (quarters * .25) + (dimes * .10) + (nickels * .05) + (pennies * .01);
	return dol;
}
int main()
{
	int a,b,c,d;
	cout<<"Enter quarter : ";
	cin>>a;
	cout<<"Enter dimes : ";
	cin>>b;
	cout<<"Enter nickels : ";
	cin>>c;
	cout<<"Enter pennies : ";
	cin>>d;
	float dollars=totamt(a,b,c,d);
	cout<<"total amount in piggybank : "<<dollars<<"$";
}
