#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <iostream>
#include <vector>

struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x):val(x),left(NULL),right(NULL){}
};

void preorder(TreeNode* root);

#endif
