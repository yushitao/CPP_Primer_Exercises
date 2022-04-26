#include <iostream>

using namespace std;

int main()
{
	cout<<"Please input the range of numbers:"<<endl;
	int Val1,Val2;
	cin>>Val1>>Val2;
	int sum = 0;
	for(int i=Val1;i<=Val2;i++)
	{
		sum+=i;
	};
	cout<<"The sum by For result is:"<<sum<<endl;
	sum =0;
	while(Val1<=Val2)
	{
		sum+=Val1;
		Val1++;
	};
	cout<<"The sum by While result is:"<<sum<<endl;
	return 0;
}
