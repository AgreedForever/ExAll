// Ex1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

class TestC 
{

};

class TestB 
{
public:
  TestB() {}
  ~TestB() {}
};

class TestA 
{
public:
  virtual void Foo() {}
};

int main()
{
  using namespace std;
  cout << "sizeof(TestC) " << sizeof(TestC) << "\n";
  cout << "sizeof(TestB) " << sizeof(TestB) << "\n";
  cout << "sizeof(TestA) " << sizeof(TestA) << endl;
  return 0;
}

