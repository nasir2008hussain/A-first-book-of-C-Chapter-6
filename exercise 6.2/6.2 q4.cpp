#include<iostream>
#include<cmath>
using namespace std;
double abso(double x)
{
	double y=abs(x);
	return y;
}
int main()
{
     double a,b;
     cout<<"Enter the number : ";
     cin>>a;
     b=abso(a);
     cout << "abs(" << a << ") = |" << a << "| = " << b << endl;
}
