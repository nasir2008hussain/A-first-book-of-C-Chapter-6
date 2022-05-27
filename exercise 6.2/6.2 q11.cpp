#include<iostream>
#include<cmath>
using namespace std;
float heron(int a, int b,int c)
{
	float s,A;
	s=(a+b+c)/2.0;
	if(s>0)
	{
		A=sqrt(s*(s-a)*(s-b)*(s-c));
		return A;
	}
	else
	{
		A=-1;
		return A;
	}
}
int main()
{
	int x,y,z;
	cout<<"Enter a : ";
	cin>>x;
	cout<<"Enter b : ";
	cin>>y;
	cout<<"Enter c : ";
	cin>>z;
	float Area=heron(x,y,z);
	cout<<"Area is : "<<Area;
	
}

