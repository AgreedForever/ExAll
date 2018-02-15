// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

class A 
{
public:
  A(int n) { value = n; }
  A(A other) { value = other.value; }
  void Print() { std::cout << value << std::endl; }
private:
  int value;
};

int main()
{
  A a = 5;
  A b = a;
  b.Print();
  return 0;
}

