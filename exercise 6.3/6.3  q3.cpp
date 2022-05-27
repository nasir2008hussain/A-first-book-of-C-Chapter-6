#include<iostream>
using namespace std;
int findmax(int a,int b,int &c)
{
	
	if(a>b)
	 c=a;
	else
	 c=b;
	return c;
	
}
int main()
{
	int x,y,max;
	cout<<"Enter 1st : ";
	cin>>x;
	cout<<"Enter 2nd : ";
	cin>>y;
	findmax(x,y,max);
	cout<<"Max number : "<<max;
	
	
}
