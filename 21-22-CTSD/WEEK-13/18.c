/*HACKER RANK SUBMISSION
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
   struct SinglyLinkedListNode *new_node,*ptr;
   new_node=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL)
    {
        //new_node->next=head; optional
        head=new_node;        
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
    }
    return head;
}
*/

