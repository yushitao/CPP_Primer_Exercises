#include <iostream>
using std::cout;
using std::endl;
int main()
{
// local objects of type int
int value = 2;
int pow = 10;
int result = 1;
// repeat calculation of result until cnt is equal to pow
for (int cnt = 0; cnt != pow; ++cnt)
result *= value; // result = result * value;
cout << value
<< " raised to the power of "
<< pow << ": \t"
<< result << endl;
return 0;
}
