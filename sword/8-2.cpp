#include <iostream>

using namespace std;

int findMin(int *a, int length)
{
  int idx1 = 0;
  int idx2 = length-1;
  int idxMid = idx1;
  while(a[idx1] >= a[idx2]){
    if(idx2-idx1 == 1){
      idxMid = idx2;
      break;
    }
    idxMid = (idx1+idx2)/2;
    if(a[idx1] == a[idx2] && a[idx1] == a[idxMid]){
      int res = a[idx1];
      for(int i = idx1+1; i <= idx2; i++){
        if(a[i] < res){
          res = a[i];
        }
      }
      return res;
    }
    if(a[idxMid] > a[idx1]){
      idx1 = idxMid;
    }
    else if(a[idxMid] < a[idx2]){
      idx2 = idxMid;
    }
  }
  return a[idxMid];
}

int main()
{
  int a[] = {3,4,5,1,2};
  int res = findMin(a, 5);
  cout << res << endl;
  return 0;
}
