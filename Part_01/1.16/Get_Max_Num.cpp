#include <iostream>

using namespace std;

int main()
{
	cout<<"Please input two Numbers:"<<endl;
	int Val1,Val2;
	cin>>Val1>>Val2;
	int Max;
	if(Val1<=Val2)
	{
		Max=Val2;
	}
	else
	{
		Max=Val1;
	};
	cout<<"The Max Number is:"<<Max<<endl;
	return 0;
}
