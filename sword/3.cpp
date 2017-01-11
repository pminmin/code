#include <iostream>
#include <stdio.h>

using namespace std;

bool NumberInArray(int *matrix, int rows, int cols, int num)
{
	bool flag = false;
	if(matrix != NULL && rows > 0 && cols > 0){
		int i = 0, j = cols-1;
		while(i < rows && j > 0){
			if(matrix[i*cols+j] == num){
				flag = true;
				break;
			}
			else if(matrix[i*cols+j] > num){
				j--;
			}else{
				i++;
			}
		}
	}
	return flag;
}

int main(){
	int matrix[] = {1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
  int *a = NULL;
	int num;
	printf("Please input the number:\n");
	scanf("%d", &num);
	bool find = NumberInArray(matrix, 4, 4, num);
  bool finda = NumberInArray(a, 4,4,7);
	std::cout << find << std::endl;
  cout << finda << endl;
  return 0;
}
