#include<iostream>
#include<cmath>
using namespace std;
double round(double x,int n)
{
	int y;
	double y1,x1,z,r;
	y1=x*pow(10,n);
	y=y1+0.5;
	r=y/pow(10,n);
	return r;
	
}
int main()
{
	double a;
	int n;
	cout<<"Enter the number : ";
	cin>>a;
	cout<<"Round off upto decimal point : ";
	cin>>n;
	double rnd = round(a,n);
	cout<<"After round off : "<<rnd;
	
}
