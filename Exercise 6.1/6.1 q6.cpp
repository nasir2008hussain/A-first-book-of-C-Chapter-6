#include<iostream>
#include<cmath>
using namespace std;
void powfun(float a,int b)
{
	float c=pow(a,b);
	cout<<"Answer of "<<a<<" power "<<b<<" is = "<<c;
}
int main()
{
	float x;
	int y;
	cout<<"Enter num : ";
	cin>>x;
	cout<<"Enter pow : ";
	cin>>y;
	powfun(x,y);
}
