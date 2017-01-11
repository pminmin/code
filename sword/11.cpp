#include <iostream>
#include <math>

using namespace std;

double power(int base, int exponent)
{
  if((base - 0.0) > -0.00000001 && (base-0.0)< 0.00000001){
    return 0.0;
  }

  double res = 1;
  for(int i = 0; i < abs(exponent); i++){
    res *= base;
  }
  if(exponet < 0){
    return 1/double(res);
  }
  else 
    return res;
}

int main()
{
  return 0;
}
