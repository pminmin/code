#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

bool Increment(char *s)
{
  bool isOverFlow = false;
  int len = strlen(s);
  int i;

  // char to int
  for(i = 0; i < len; i++){
    s[i] = s[i] - '0';
  }
  s[len-1]++;
  for(i = len-1; i >= 0; i--){
    if(s[i] >= 10){
      if(i == 0){
        isOverFlow = true;
        s[i]--;
      }else{
        s[i] -= 10;
        s[i-1] += 1;
      }
    }
    else
      break;
  }

  // int to char
  for(i = 0; i < len; i++){
    s[i] = s[i] + '0';
  }
  return isOverFlow;
}

void PrintNumber(char *s)
{
  int i = 0;
  while(s[i] == '0')
    i++;
  printf("%s\t", s+i);
}

void PrintOneToN(int n)
{
  if(n <= 0) return;
  char *str = new char[n+1];
  memset(str, '0', n*sizeof(char));
  str[n] = '\0';
  while(!Increment(str)){
    PrintNumber(str);
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  PrintOneToN(n);
  return 0;
}
