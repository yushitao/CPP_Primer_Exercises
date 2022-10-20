#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item Book,Sum;
	cout<<"Please Input Books Info:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>Book;
		Sum+=Book;
	}

		cout<<"Result is:"<<Sum<<endl;
	return 0;
}
