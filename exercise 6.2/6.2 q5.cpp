#include<iostream>
using namespace std;
float cylvol(float a,float b)
{
	float vol;
	vol=3.14*(a*a)*b;
	return vol;
}
int main()
{
	float x,y;
	cout<<"Enter the radius : ";
	cin>>x;
	cout<<"Enter the length : ";
	cin>>y;
	float v=cylvol(x,y);
	cout<<"The volume of cylinder : "<<v;
}
