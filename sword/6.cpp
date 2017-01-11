#include <iostream>
#include "utils.hpp"

using namespace std;

TreeNode* construct_core(int* startPre, int* endPre, int* startIn, int* endIn)
{
  int root_val = startPre[0];
  TreeNode* root = new TreeNode(root_val);
  root->left = NULL;
  root->right = NULL;

  if(startPre == endPre){
    if(startIn == endIn && *startPre == *startIn){
      return root;
    }
  }

  int* rootIn = startIn;
  while(rootIn <= endIn && *rootIn != root_val){
    ++rootIn;
  }

  int leftLength = rootIn - startIn;
  int* leftPreEnd = startPre + leftLength;
  if(leftLength > 0){
    root->left = construct_core(startPre+1, leftPreEnd, startIn, rootIn-1);
  }
  if(leftLength < endPre-startPre){
    root->right = construct_core(startPre+leftLength+1, endPre, rootIn+1, endIn);
  }
  return root;
}

TreeNode* construct(int* preOrder, int* inOrder, int length)
{
  if(preOrder == NULL) return NULL;
  return construct_core(preOrder, preOrder+length-1, inOrder, inOrder+length-1);
}

int main()
{
  int pre[] = {1,2,4,7,3,5,6,8};
  int in[] = {4,7,2,1,5,3,8,6};
  int* preOrder = pre;
  int* inOrder = in;
  TreeNode* root = construct(preOrder, inOrder, 8);
  preorder(root);
  cout << endl;
  return 0;
}
