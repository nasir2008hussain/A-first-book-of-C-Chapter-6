#include<iostream>;
using namespace std;
int table(int x)
{
	cout<<x<<"\t";
	int y1=x*x;
	cout<<y1<<"\t";
	int y2=x*x*x;
	cout<<y2<<endl;
}
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		table(i);
	}
}
