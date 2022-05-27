#include<iostream>
using namespace std;
void mul(float a,float b)
{
	float c=a*b;
	cout<<"Multipication of "<<a<<" and "<<b<<" is = "<<c;
}
int main()
{
	float x,y;
	cout<<"Enter 1st : ";
	cin>>x;
	cout<<"Enter 2nd : ";
	cin>>y;
	mul(x,y);
}
