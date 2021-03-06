/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    struct Node *cur,*next,*pre;
    cur=head;
    pre=NULL;
    while(cur!=NULL) {
        next=cur->next;
        cur->next=pre;
        pre=cur;
        cur=next;
    }
    head=pre;
    return head;
}
