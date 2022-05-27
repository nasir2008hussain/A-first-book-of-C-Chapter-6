#include<iostream>
using namespace std;
int evod(int x)
{
	int y;
	y=x%2;
	if(y==0)
	 cout<<x<<" is even";
	else
	 cout<<x<<" is odd"; 
}
int main()
{
	int a;
	cout<<"Enter : ";
	cin>>a;
	evod(a);
}
