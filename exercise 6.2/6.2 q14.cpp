#include<iostream>
using namespace std;
int leap(int x)
{
	int y;
	if(x%400==0 || x%4==0)
	{
		y=1;
		return y;
	}
	else
	{
	  y=0;
	  return y;	
	}
	
}
int main()
{
	int a;
	cout<<"Enter the year : ";
	cin>>a;
	cout<<"1 is for leap year :\n0 is for non_leap year : \n";
	int b=leap(a);
	cout<<"the year is "<<b;
}
