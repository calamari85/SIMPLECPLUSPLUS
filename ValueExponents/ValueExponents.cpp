#include <iostream>
 using namespace std;
 int main()
 {
 int value, pow, result=1;
 cout << "Please enter operand:" << endl;
 cin >> value;
 cout << "Please enter exponent:" << endl;
 cin >> pow;
 for (int cnt=0; cnt!=pow; cnt++)
 result*=value;
 cout << value << " to the power of " << pow << " is: " << result << endl;
 return 0;
 }
