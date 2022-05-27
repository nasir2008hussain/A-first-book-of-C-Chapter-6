#include<iostream>
using namespace std;
int second(int second,int &hour, int &min, int &sec)
{
	hour=second/3600;
	second%=3600;
	min=second/60;
	second%=60;
	sec=second;
	return second;
	
}
int main()
{
	int x1,x,y,z;
	cout<<"Enter the second : ";
	cin>>x1;
	second(x1,x,y,z);
	cout<<"The hour is : "<<x<<endl;
	cout<<"The minute is : "<<y<<endl;
	cout<<"The second is : "<<z;
	
	
	
}
