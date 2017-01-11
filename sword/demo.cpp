#include "utils.hpp"

using namespace std;

int main()
{
  TreeNode* n1 = new TreeNode(2);
  TreeNode* n2 = new TreeNode(5);
  TreeNode* n3 = new TreeNode(8);
  TreeNode* n4 = new TreeNode(4);

  n1->left = n2; n1->right = n3;
  n2->left = n2->right = NULL;
  n3->left = n4; n3->right = NULL;
  n4->left = n4->right = NULL;
  preorder(n1);
  cout << endl;
  return 0;
}
