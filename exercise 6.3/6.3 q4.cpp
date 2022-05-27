#include <iostream>
using namespace std;
int change(int price, int& hundreds, int& fifties, int& twenties, int& tens, int& fives, int& ones)
{                    
	
	hundreds = price / 100;
	price %= 100;
	fifties = price / 50;
	price %= 50;
	twenties = price / 20;
	price %= 20;
	tens = price/ 10;
	price%= 10;
	fives = price / 5;
	price%= 5;
	ones = price;
    return price ; 
}
int main()
{
	int money,a,b,c,d,e,f;
	cout << "Enter the money : ";
	cin >>money;
	change(money,a,b,c,d,e,f);
	cout <<money<<" has "<<a<< " hundreds"<< endl;
	cout <<money<<" has "<<b<< " fifties" << endl;
	cout <<money<<" has "<<c<< " twenties" << endl;
	cout <<money<<" has "<<d<< " tens" << endl;
	cout <<money<<" has "<<e<< " fives" << endl;
	cout <<money<<" has "<<f<< " ones" << endl;	
}


