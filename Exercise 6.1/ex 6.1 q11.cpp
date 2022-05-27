#include<iostream>
#include<stdio.h>
using namespace std;
int milekm(int x,int y,int z)
{
	int i=0;
	float x1,x2;
	double split = ((x + y) / 2);
	cout<<"Miles \t Kilometer\n";
	for (int miles = x; miles <= split; miles = miles + z)
	{
		x1=x*1.61;
		cout<<miles<<"\t"<<x1;
		cout<<endl;
		
	}
	cout<<"Miles \t Kilometer\n";
	for (int miles2 = split + 1; miles2 <= y; miles2 = miles2 + z)
	{
		x2 = miles2 * 1.61;
		cout << miles2 <<"\t"<<x2<< endl;
	}
	
	
}
int main()
{
	int a,b,c,i=0;
	cout<<"enter starting value : ";
	cin>>a;
	cout<<"stopping : ";
	cin>>b;
	cout<<"Increment : ";
	cin>>c;
	milekm(a,b,c);
}
