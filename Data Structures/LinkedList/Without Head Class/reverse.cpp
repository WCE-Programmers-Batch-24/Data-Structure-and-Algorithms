
// Method to reverse the linked list
void reverse_list(Node* &root)
{

    Node* r = NULL ;
    Node* q = root , *p ;

    // initial order r , q ->
    // now we change the next of q and set it to r. so r and q are reversed
    // but now we cannot move to original next of q.
    // for this we have third pointer p. Using p , q can move forward
    while (q != NULL)
    {
        p = q->next;
        q->next = r ;
        r = q ;
        q = p ;
    } 

    // finally set head/root of our linked list to last node
    root = r ;
}