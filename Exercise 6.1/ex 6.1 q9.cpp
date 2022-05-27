#include<iostream>
using namespace std;
int totsec(int x,int y,int z)
{
	int total;
	total=(x*60*60)+(y*60)+z;
	return total;//yhi kih ya to yhi output dedo ya yhan sy isko return krdo;
	
}
int main()
{
	int a=0,b=0,c=0;
	cout<<"Enter hour : ";
	cin>>a;
	cout<<"Enter minute : ";
	cin>>b;
	cout<<"Enter second : ";
	cin>>c;
	cout<<totsec(a,b,c);//or jo calling function hy wahin cout likh do to return wali chiz mil jata hy
	
	
}
