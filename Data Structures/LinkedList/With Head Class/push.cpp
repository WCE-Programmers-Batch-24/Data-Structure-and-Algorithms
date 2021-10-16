/*
  ____                  _        _____                          _     _                 
 |  _ \   _   _   ___  | |__    |  ___|  _   _   _ __     ___  | |_  (_)   ___    _ __  
 | |_) | | | | | / __| | '_ \   | |_    | | | | | '_ \   / __| | __| | |  / _ \  | '_ \ 
 |  __/  | |_| | \__ \ | | | |  |  _|   | |_| | | | | | | (__  | |_  | | | (_) | | | | |
 |_|      \__,_| |___/ |_| |_|  |_|      \__,_| |_| |_|  \___|  \__| |_|  \___/  |_| |_|
                                                                                                                                                                                                                                                              
*/
                                                                          
/*
  Push Function - Add a node at the head position.
*/
void push(Head *h, int data){

    Node* new_node = new Node(data);
    
    /*
      Checking if the list is empty or not and pushing accordingly.
    */
    if(h->count==0){
        h->first = new_node;
        h->last = new_node;
        h->count++;

        return;
    }
    else{
        new_node->next = h->first;
        h->first = new_node;
        h->count++;

        return;
    }
}                                                                              