#include<iostream>
#include<cmath>
using namespace std;
float vol(int x)
{
	float y=(4*3.141592*(pow(x,3))/3);
	return y;
}
int main()
{
	float a;
	cout<<"Enter the radius : ";
	cin>>a;
	cout<<"Vol = "<<vol(a);
}
//ek bat or kih function type jo hy woh return krty wqt matter krti hy
