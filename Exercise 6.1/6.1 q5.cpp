#include<iostream>
using namespace std;
void sq(float a)
{
	float c=a*a;
	cout<<"Square of "<<a<<" is = "<<c;
}
int main()
{
	float x,y;
	cout<<"Enter num : ";
	cin>>x;
	sq(x);
}
