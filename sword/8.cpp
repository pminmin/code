#include <iostream>

using namespace std;

int findMin(int a[], int length)
{
  bool flag = false;
  int i = 1;
  while(i < length-1)
  {
    if(a[i] < a[i-1] && a[i] < a[i+1]){
      flag = true;
      break;
    }
    i++;
  }
  if(i == length-2){
    if(flag == true)
      return a[i];
    else if(a[i] < a[i+1])
      return a[0];
    else if(a[i] > a[i+1])
      return a[length-1];
  }
  return a[i];
}

int main()
{
  int a[] = {3,4,5,1,2};
  int res = findMin(a,5);
  cout << res << endl;
  return 0;
}
