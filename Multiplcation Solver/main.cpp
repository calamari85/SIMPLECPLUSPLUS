#include <iostream>
 int main()
 {
 int sum=0, value;
 std::cout << "Please enter numbers:" << std::endl;
 while (std::cin >> value)
 sum*=value;
 std::cout << "Sum is: " << sum << std::endl;
 return 0;
 }
