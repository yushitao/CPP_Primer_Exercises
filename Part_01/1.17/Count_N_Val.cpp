#include <iostream>

using namespace std;

int main()
{
	cout<<"Please input the number of numbers:"<<endl;
	int Counter;
	cin>>Counter;
	int Counter_N=0;
	int Number=0;
	for(int i=0;i<Counter;i++)
	{
		cout<<"Please enter the number:";
		cin>>Number;
		if(Number<0)
		{
			Counter_N++;
		}
	};
	cout<<"The Nav	Number have:"<<Counter_N<<endl;
	return 0;
}
