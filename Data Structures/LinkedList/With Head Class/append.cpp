/*
     _                                         _    _____                          _     _                 
    / \     _ __    _ __     ___   _ __     __| |  |  ___|  _   _   _ __     ___  | |_  (_)   ___    _ __  
   / _ \   | '_ \  | '_ \   / _ \ | '_ \   / _` |  | |_    | | | | | '_ \   / __| | __| | |  / _ \  | '_ \ 
  / ___ \  | |_) | | |_) | |  __/ | | | | | (_| |  |  _|   | |_| | | | | | | (__  | |_  | | | (_) | | | | |
 /_/   \_\ | .__/  | .__/   \___| |_| |_|  \__,_|  |_|      \__,_| |_| |_|  \___|  \__| |_|  \___/  |_| |_|
           |_|     |_|                                                                                     
*/

/*
  Append Function adds a node at the end of the list.
*/

void append(Head *h, int data){

    Node* new_node = new Node(data);

    /*
      Checking if the list is empty or not.
    */
    if(h->count==0){
        h->first = new_node;
        h->last = new_node;
        h->count++;

        return;
    }
    else{
        Node* p = h->first;
        
        /*
          Traversing through the list.
        */
        for(int i=0; i<h->count; i++){

            /*
              Checking if the selected node is last one.
            */
            if(p->next==NULL){
                p->next = new_node;
                h->count++;
                return;
            }
            p = p->next;
        }
    }
}