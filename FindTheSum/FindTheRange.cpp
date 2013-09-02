#include <iostream>
 int main()
 {
 int v1, v2, range;
 std::cout << "Please input two numbers:" << std::endl;
 std::cin >> v1 >> v2;
 if (v1<=v2){
 range=v2-v1;
 } else {
 range=v1-v2; }
 std::cout << "range = " << range << std::endl;
 return 0;
 }
