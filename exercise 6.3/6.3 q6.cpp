#include<iostream>
using namespace std;
void yearcalc(int x,int &year,int &month,int &day)
{
	
	int y=x/365;
	year+=y;
	x%=365;
	int y1=x/30;
	month+=y1;
	x%=30;
	day=x;
	return ;
	
}
int main()
{
	int a,b,c,d;
	cout<<"Enter the days : ";
	cin>>a;
	b=2000;
	c=1;
	d=1;
	cout<<"Stating date is (DD/MM/YYYY) : "<<d<<" / "<<c<<" / "<<b<<endl;
	yearcalc(a,b,c,d);
	cout<<"Current date is (DD/MM/YYYY) : "<<d<<" / "<<c<<" / "<<b<<endl;
	
}
