// program to count no. of nodes of linkedList
int count(Node* n){
    int c=0;
    while(n!=NULL){
        c++;
        n = n->next;
    }
    return c;
}
