#include <iostream>
#include "7.hpp"

template <typename T>
void MyQueue<T>::appendTail(const T& t)
{
  s1.push(t);
}

template <typename T>
T& MyQueue<T>::deleteHead()
{
  if(s2.empty()){
    while(!s1.empty()){
      s2.push(s1.top());
      s1.pop();
    }
  }
  if(s2.size()==0){
    throw new exception("Queue is empty!");
  }
  T res = s2.top();
  s2.pop();
  return res;
}

int main()
{
  return 0;
}
