#ifndef 7_HPP_
#define 7_HPP_

#include <stack>

template <typename T>
class MyQueue{
public:
  MyQueue();
  ~MyQueue();
  void appendTail(const T& t);
  T& deleteHead();
private:
  stack<T> s1;
  stack<T> s2;
};

#endif
