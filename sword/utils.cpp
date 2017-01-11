#include <iomanip>
#include "utils.hpp"

using namespace std;

void preorder(TreeNode* root)
{
  if(root){
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
  }
}
