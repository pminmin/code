#include <iostream>
#include <vector>

using namespace std;

// 给定整数数组，调整数组中数字的顺序，使得所有奇数位于数组的前半部分，偶数位于
// 数组的后半部分
void func(int *array, int length)
{
  if(array == NULL || length == 0)
    return;
  int idx1 = 0;
  int idx2 = length-1;
  while(idx1 < idx2){
    while(idx1 < idx2 && array[idx1] % 2 != 0)
      idx1++;
    while(idx1 < idx2 && array[idx2] % 2 == 0)
      idx2--;

    if(idx1 < idx2){
      int tmp = array[idx1];
      array[idx1] = array[idx2];
      array[idx2] = tmp;
    }
  }
}

int main()
{
  int array[] = {1,2,3,4,5};
  func(array, 5);
  for(int i = 0; i < 5; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
  return 0;
}
