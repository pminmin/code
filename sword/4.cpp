#include <iostream>
#include <string>

using namespace std;

string ChangeStr(string& str)
{
  string newStr = "";
  string insert = "%20";
  string::size_type len = str.size();
  for(int i = 0; i < len; i++){
    if(str[i] == ' '){
      newStr += insert; 
    }else{
      string tmp(1, str[i]);
      newStr += tmp;
    }
  }
  return newStr;
}

int main()
{
  cout << "Please input a string: \n";
  string str;
  getline(cin, str);
  cout << "original str: " << str << endl;
  string newStr = ChangeStr(str);
  cout << "new str: " << newStr << endl;
  return 0;
}
