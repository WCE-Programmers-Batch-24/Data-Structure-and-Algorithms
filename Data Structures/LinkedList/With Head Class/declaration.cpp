/*
  Declaration of LinkedList with Head class
*/

/* 
  Declaration of Node Class 👇
  data = Stores the data.
  *next = Pointer pointing to the next node in the LinkedList.
*/
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

/* 
  Declaration of Head Class 👇
  count = length of LinkedList.
  *first = Pointer pointing to the first node of the LinkedList.
  *last = Pointer pointing to the last node of the LinkedList.
*/
class Head{
    public:
    int count;
    Node *first;
    Node *last;
    Head(int c, Node *f, Node* l){
        this->count = c;
        this->first = f;
        this->last = l;
    }
};