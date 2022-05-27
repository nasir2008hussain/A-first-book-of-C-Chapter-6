#include<iostream>
using namespace std;
int liquid(int cup,int &cups,int &gallons,int &quarts,int&pints)
{
	gallons=cup/16;
	cup%=16;
	quarts=cup/4;
	cup%=4;
	pints=cup/2;
	cup%=2;
	cups=cup;
	return cups;
	
}
int main()
{
	int a,a1,b,c,d;
	cout<<"Enter the cups of liquid : ";
	cin>>a;
	liquid(a,a1,b,c,d);
	cout<<"Gallons = "<<b<<endl;
	cout<<"Quarts = "<<c<<endl;
	cout<<"Pints = "<<d<<endl;
	cout<<"Cups = "<<a1;
	
}
