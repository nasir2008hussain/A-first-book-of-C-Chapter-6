#include<iostream>
#include<cmath>
using namespace std;
float right(float a,float b)
{
	float c;
	c=sqrt((a*a)+(b*b));
	return c;
}
int main()
{
	float x,y;
	cout<<"Enter base : ";
	cin>>x;
	cout<<"Enter perp : ";
	cin>>y;
    float hyp=right(x,y);
	cout<<"Hyp : "<<hyp;
}
