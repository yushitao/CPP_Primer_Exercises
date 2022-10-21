#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	bool FindBook = false;
	int TypeCount = 0;
	Sales_item Book,Books[5];
	cout<<"Please Input Books Info:"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>Book;
		for(int j=0;j<TypeCount;j++)
		{
			if(Books[j].same_isbn(Book))
			{
				Books[j]+=Book;
				FindBook = true;
				break;
			}
		}
		if(!FindBook)
			Books[TypeCount++] = Book;
		FindBook = false;
	}
	for(int i=0;i<TypeCount;i++)
	{
		cout<<Books[i]<<endl;
	}
	return 0;
}
