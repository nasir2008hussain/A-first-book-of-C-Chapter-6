#include<iostream>
using namespace std;
int seltab(int x,int y, int z)
{
	int i=0;
	while(i!=y)
	{
	   cout<<x<<" ";
	   cout<<x*x<<" ";
	   cout<<x*x*x<<" "<<endl;
	   x+=z;
	   i++;	
	}
  	
}
int main()
{
	int a,b,c,i=0;
	cout<<"enter starting value : ";
	cin>>a;
	cout<<"upto : ";
	cin>>b;
	cout<<"Increment : ";
	cin>>c;
	seltab(a,b,c);
}
