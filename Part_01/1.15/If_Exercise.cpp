#include <iostream>

using namespace std;

int main()
{
	cout<<"Please input the lower and upper:"<<endl;
	int Val1,Val2;
	cin>>Val1>>Val2;
	int Lower,Upper;
	if(Val1<=Val2)
	{
		Lower=Val1;
		Upper=Val2;
	}
	else
	{
		Lower=Val2;
		Upper=Val1;
	};
	int sum=0;
	for(int Val = Lower;Val<=Upper;++Val)
	{
		sum+=Val;
	}
	cout<<"Sum form "<<Lower<<" to "<<Upper
		<<" is:"<<sum<<endl;
}
