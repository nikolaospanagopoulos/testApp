#include <iostream>

int add(int num1, int num2);
int devide(int num1, int num2);
int main() {
  std::cout << "hello" << std::endl;
  std::cout << "hello" << std::endl;

  std::cout << add(5, 4) << std::endl;

  std::cout << devide(10, 2) << std::endl;

  return 0;
}

int add(int num1, int num2) { return num1 + num2; }
int devide(int num1, int num2) { return num1 / num2; }
