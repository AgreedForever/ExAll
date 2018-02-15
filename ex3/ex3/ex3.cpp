// ex3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <mutex>

class Singleton 
{
public:
  Singleton* GetInstance() {
    if (instance_ == nullptr) {
      std::lock_guard<std::mutex> l(mutex_);
      if (instance_ == nullptr) {
        instance_ = new(std::nothrow) Singleton;
      }
    }
    return instance_;
  }

private:
  Singleton() {}
  static Singleton* instance_;
  static std::mutex mutex_;
};
Singleton* Singleton::instance_ = nullptr;

class Singleton2 
{
public:
  Singleton2& GetInstance() {
    static Singleton2 instance;
    return instance;
  }
private:
  Singleton2() {}
};
int main()
{
    return 0;
}

