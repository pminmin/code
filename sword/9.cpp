#include <iostream>

using namespace std;

long long Fibonacci(unsigned int n)
{
  if(n <= 0){
    return 0;
  }
  if(n == 1){
    return 1;
  }
  long pre = 0;
  long current = 1;
  long next;
  for(int i = 2; i <= n; i++){
    next = pre + current;

    pre = current;
    current = next;
  }
  return next;
}

int main()
{
  int n;
  cin >> n;
  cout << Fibonacci(n) << endl;
  return 0;
}
