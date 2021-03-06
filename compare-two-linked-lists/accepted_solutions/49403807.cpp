/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    Node *a = headA;
    Node *b = headB;
    while(a!=NULL || b!=NULL) {
        if(a==NULL ||b==NULL||a->data!=b->data) return 0;
        a=a->next;
        b=b->next;
    }
    return 1;
}
