#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	for(int Val = 50;Val<=100;++Val)
	{
		sum+=Val;
	}
	cout<<"Loop For result is:"<<sum<<endl;
	sum = 0;
	int Val = 50;
	while(Val <=100)
	{
		sum+=Val;
		++Val;
	}
	cout<<"Loop While result is:"<<sum<<endl;
}
