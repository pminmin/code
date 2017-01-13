#include <iostream>

using namespace std;

// 输入一个链表，输出该链表中倒数第k个结点

struct ListNode{
  int val;
  ListNode* next;
};

void func(ListNode* head, int k)
{
    if(head == NULL || k < 0)
      return;
    int length = 0;
    ListNode* p = head;
    while(p->next != NULL){
      length++;
      p = p->next;
    }
    int idx = length - k;
    p = head;
    for(int i = 0; i < idx; i++){
      p = p->next;
    }
    cout << p->val << endl;
}

int main()
{
  return 0;
}
