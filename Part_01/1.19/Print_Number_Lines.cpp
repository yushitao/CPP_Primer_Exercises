#include <iostream>

using namespace std;

int main()
{
	cout<<"Please input the range of numbers:"<<endl;
	int Val1,Val2;
	cin>>Val1>>Val2;
	if(Val1>=Val2)
	{
		Val1+=Val2;
		Val2=Val1-Val2;
		Val1=Val1-Val2;
	};
	cout<<"The Number between "<<Val1<<" to "<<Val2<<" is:"<<endl;
	int CountOfLine=0;
	for(int i=Val1;i<=Val2;i++)
	{
		cout<<i<<'\t';
		CountOfLine++;
		if(CountOfLine>=10)
		{
			cout<<endl;
			CountOfLine=0;
		}
	};
	return 0;
}
