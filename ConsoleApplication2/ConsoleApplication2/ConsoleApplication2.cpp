// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string.h>
#include <iostream>

class CMyString 
{
public:
  CMyString(char* pData = nullptr) {}
  CMyString(const CMyString& str) {
    m_pData = new char[strlen(str.m_pData) + 1];
    strcpy(m_pData, str.m_pData);
  }
  ~CMyString(void) {}
  CMyString& operator= (const CMyString& str) {
    if (&str == this)
      return *this;

    char* tmp = new(std::nothrow) char[strlen(str.m_pData) + 1];

    if (tmp == nullptr)
      return *this;

    delete[] m_pData;
    m_pData = tmp;
    strcpy(m_pData, str.m_pData);
    return *this;
  }

private:
  char* m_pData;
};

int main()
{
    return 0;
}

