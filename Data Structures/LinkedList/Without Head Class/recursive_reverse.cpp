
// recursive method to reverse a linked list
void recursive_reverse(Node* n, Node* t)
{ 
    if (n != NULL)
    {
        recursive_reverse(n->next, n) ;
        n->next = t ;
    }
    else head = t ;

}