#include<iostream>
using namespace std;
int daycount(int a, int b, int c)
{
	if (b% 30==0)
		b=30;
	else if (b==1)
		b=0;
	else
	   b=(b-1) * 30; 
    double count = (a)+(b)+(c*365);

		return count;
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
	int totdays=daycount(x,y,z);
	cout<<"Total days : "<<totdays;
}
