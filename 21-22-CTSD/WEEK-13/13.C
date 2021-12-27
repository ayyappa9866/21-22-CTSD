
HAKERRANK SUBMISSION 

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if (head == NULL)
     return NULL;
    if (head->next == NULL)
     {
        return head;
    } else
     {
        SinglyLinkedListNode *newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }

}