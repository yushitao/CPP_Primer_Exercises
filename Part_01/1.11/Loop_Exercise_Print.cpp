#include <iostream>

using namespace std;

int main()
{
	cout<<"Loop for Print is:";
	for(int Val = 10;Val>=0;--Val)
	{
		cout<<Val<<'\t';
	}
	cout<<endl;
	int Val = 10;
	cout<<"Loop while Print is:";
	while(Val >=0)
	{
		cout<<Val<<'\t';
		--Val;
	}
	cout<<endl;
}
