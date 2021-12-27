//leetcode submission 
void deleteNode(struct ListNode* node) 
{  
  node->val = node->next->val;
  node->next= node->next->next;
}//






#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int val;
   struct ListNode *next;
}*head=NULL;
void deleteNode(struct ListNode* node) 
{  
  node->val = node->next->val;
  node->next= node->next->next;
}
int main()
{
   struct ListNode *new_node;
   new_node=(struct ListNode*)malloc(sizeof(struct ListNode));
   deleteNode(new_node);
   return 0;
}