#include<iostream>
using namespace std;
float srfarea(float a,float b)
{
	float s;
	s=2*3.14*a*b;
	return s;
}
int main()
{
	float x,y;
	cout<<"Enter the radius : ";
	cin>>x;
	cout<<"Enter the length : ";
	cin>>y;
	float sa=srfarea(x,y);
	cout<<"The surface area of cylinder : "<<sa;
}
