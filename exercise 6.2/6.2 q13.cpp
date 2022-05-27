#include<iostream>
#include<cmath>
using namespace std;
double frac(double x)
{
	double y;
	double z;
	z=modf(x,&y);
	return z;
}
int main()
{
	double a;
	cout<<"Enter the double : ";
	cin>>a;
	double b=frac(a);
	cout<<"The fractional part is : "<<b;
}
