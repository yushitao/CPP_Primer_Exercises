#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item Book1,Book2;
	cout<<"Please Input Books Info:"<<endl;
		cin>>Book1>>Book2;

		cout<<"Result is:"<<Book1+Book2<<endl;
	return 0;
}
