#include<iostream>
using namespace std;
int main()
{
	float a,b,maximum;
	cout<<"enter 1st : ";
	cin>>a;
	cout<<"Enter 2nd : ";
	cin>>b;
	maximum=max(a,b);
	cout<<"Maximum = "<<maximum;
	
}
int max(float x,float y)
{
	float maxi;
	if(x>y)
	 maxi=x;
	else
	 maxi=y;
	return maxi;
	 
}

