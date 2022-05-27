#include<iostream>
using namespace std;
int secpol(int a,int b,int c,int x)
{
	int sp=(a*(x*x))+(b*x)+c;
	return sp;
}

int main()
{
	int a,b,c,x;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	cout<<"Enter c : ";
	cin>>c;
	cout<<"Enter x : ";
	cin>>x;
	int poly=secpol(a,b,c,x);
	cout<<"Second degree polynomial : "<<poly;
}
