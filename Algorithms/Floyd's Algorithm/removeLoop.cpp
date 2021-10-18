
// if any loop is present in Linked list, this method will remove it
void removeLoop(Node* &n)
{
    // if only one node present then ther's no loop
    if (n == NULL or n->next == NULL) 
    {
        cout << "No Loop\n" ;
        return ;
    }

    // Here we are using Tortise and Hare (Floyd's algorithm)
    // fast pointer moves forward by two steps while slow moves by one step
    Node * fast = n ;
    Node * slow = n ;
    
    // keep slow and fast moving until they meet at same point
    do{
        fast = fast->next->next;
        slow = slow->next;

        // if fast == null or fast.next == null then there's no loop in linked list. Return
        if (fast == NULL or fast->next == NULL) {
            cout << "No Loop\n" ;
            return ;
        }
    } while (fast != slow) ;

    // now slow and fast are at same node.
    // move fast to the first node. Move fast as well as slow by one step each time
    // until their next is not same
    
    fast = n ;
    while (fast->next != slow->next) {
        fast = fast->next; 
        slow = slow->next ;
    }

    // when next of slow = next of fast. slow is at last node. Make next of slow = null
    slow->next = NULL ;
    cout << "Removed the loop\n" ;

}


// make loop in the linked list. i.e. last node will point to the node at index=pos
void makeLoop(Node* &root, int pos)
{
    // find the last node in linked list
    Node * last = root ;
    while (last->next != NULL) last = last->next ;

    // find node at index = pos
    Node *startingOfLoop = root ;
    for (int i = 1 ; i < pos ; i++) startingOfLoop = startingOfLoop->next;

    // point next of last to node at pos
    last->next = startingOfLoop ;
}