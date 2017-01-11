#include <iostream>
#include <string>

using namespace std;

// maxLength为字符数组的总容量
void ChangeStr(char str[], int maxLength)
{
  if(str == NULL || maxLength = 0){
    return;
  }
  int oldIdx = 0, oldLength = 0;
  int numOfSpaces = 0;
  while(str[oldIdx] != '\0'){
    oldLength++;
    if(str[oldIdx] == ' '){
      numOfSpaces++;
    }
    oldIdx++;
  }
  oldIdx = oldLength;
  int newLength = oldLength + 2*numOfSpaces;
  if(newLength > maxLength){
    return;
  }
  int newIdx = newLength;
  while(oldIdx >= 0 && newIdx > oldIdx){
      if(str[oldIdx] == ' '){
         str[newIdx--] = '0';
         str[newIdx--] = '2';
         str[newIdx--]= '%';
      }else{
         str[newIdx--] = str[oldIdx];
      }
      oldIdx--;
  }
}

int main()
{
  cout << "please input the str: \n";
  char str[100];
  cin.getline(str, 100);
  cout << "old str: "<< str << endl;
  ChangeStr(str, 100);
  cout << "new str: " << str << endl;
  return 0;
}
