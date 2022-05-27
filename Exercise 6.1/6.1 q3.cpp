#include<iostream>
#include<cmath>
using namespace std;
void abso(double x)
{
	double y=abs(x);
    cout << "abs(" << x << ") = |" << x << "| = " << y << endl;
	
}
int main()
{
     double a;
     cout<<"Enter the number : ";
     cin>>a;
     abso(a);
     
}
