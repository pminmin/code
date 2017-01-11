#include <iostream>

using namespace std;

int find(int n)
{
  int count = 0;
  unsigned int flag = 1;
  while(flag){
    if(n & flag){
      count++;
    }
    flag = flag << 1;
  }
  return count;
}

int find2(int n1, int n2)
{
  int yihuo = n1^n2;
  int count = 0;
  while(yihuo)
  {
    count++;
    yihuo = (yihuo-1)&yihuo;
  }
  return count;
}

int main()
{
  int n1, n2;
  cin >> n1;
  cin >> n2;
  int res = find2(n1, n2);
  cout << res << endl;
  return 0;
}
