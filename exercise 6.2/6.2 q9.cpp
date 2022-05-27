#include<iostream>
using namespace std;
int date(int a, int b, int c)
{
	double dates=c*10000+b*100+a;
	return dates;
}
int main()
{
	int x,y,z;
	cout<<"Enter days : ";
	cin>>x;
	cout<<"Enter months : ";
	cin>>y;
	cout<<"Enter years : ";
	cin>>z;
	cout<<"into DD/MM/YEAR order : "<<x<<"/"<<y<<"/"<<z<<endl;
	int totdays=date(x,y,z);
	cout<<"Into YEAR/MM/DD order : "<<totdays;
}
