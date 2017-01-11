#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct ListNode{
  int val;
  ListNode* next;
};

vector<int> printReverse(ListNode* root)
{
  vector<int> res;
  if(root == NULL)
    return res;
  stack<int> s;
  while(root != NULL){
    s.push(root->val);
    root = root->next;
  }
  while(!s.empty()){
    res.push_back(s.top());
    s.pop();
  }
  return res;
}

ListNode* createList()
{
  ListNode *head, *p;
  head = new ListNode;
  head->next = NULL;
  p = head;
  
  int x, cycle = 1;
  while(cycle){
    cout << "Please input the  val: ";
    cin >> x;
    if(x != 0){
      ListNode* tmp = new ListNode;
      tmp->val = x;

      p->next = tmp;
      p = tmp;
    }else{
      cycle = 0;
      cout << "Input done!" << endl;
    }
  }
  head = head->next;
  p->next = NULL;
  return head;
}

void printList(ListNode* head)
{
  ListNode* p = head;
  while(p != NULL)
  {
    cout << p->val << " ";
    p = p->next;
  }
  cout << "\n";
}

int main()
{
  ListNode* head = createList();
  printList(head);
  vector<int> res = printReverse(head);
  for(int i = 0; i < res.size(); i++){
    cout << res[i] << endl;
  }
  
  return 0;
}
