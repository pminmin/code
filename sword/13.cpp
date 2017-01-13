#include <iostream>

using namespace std;

struct ListNode{
  int val;
  ListNode* next;
};

void DelNode(ListNode* head, ListNode* p)
{
  if(head == NULL)
    return;
  if(p->next != NULL){
    p->val = p->next->val;
    p->next = p->next->next;
    delete p->next;
  }
  if(p == head){
    delete p;
    p = NULL;
    head = NULL;
  }
  if(p->next == NULL){
    ListNode* pre = head;
    while(pre->next != p){
      pre = pre->next;
    }
    pre->next == NULL;
    delete p;
  }
}

int main()
{
  return 0;
}
