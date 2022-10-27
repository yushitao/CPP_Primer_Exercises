#include <iostream>

using namespace std;

int main()
{
	int x,y,Ex=1;
	cout<<"Please input the base,exponent!"<<endl;
	cin>>x>>y;

	for(int i = 0;i<y;i++)
		Ex*=x;
	cout<<"the Exponentiation between:"<<x<<" and "<<y
		<<" is "<<Ex<<endl;
}
