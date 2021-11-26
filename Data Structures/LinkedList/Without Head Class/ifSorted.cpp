// To check if elements in linkedList are sorted or not
bool ifSorted(Node* n){
     int x=INT_MIN;
     Node *p=n;
     while(p!=NULL){
         if(p->data<x)
            return false;
        
        x = p->data;
        p = p->next;
     }
    return true;
}
