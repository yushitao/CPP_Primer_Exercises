#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item Books[3];
	cout<<"Please Input Books Info:"<<endl;
	for(int i = 0;i<3;i++)
	{
		cin>>Books[i];
	}

	for(int i = 0;i<3;i++)
	{
		cout<<Books[i]<<endl;
	}
	return 0;
}
