/* 
  ___                               _      _____                          _     _                 
 |_ _|  _ __    ___    ___   _ __  | |_   |  ___|  _   _   _ __     ___  | |_  (_)   ___    _ __  
  | |  | '_ \  / __|  / _ \ | '__| | __|  | |_    | | | | | '_ \   / __| | __| | |  / _ \  | '_ \ 
  | |  | | | | \__ \ |  __/ | |    | |_   |  _|   | |_| | | | | | | (__  | |_  | | | (_) | | | | |
 |___| |_| |_| |___/  \___| |_|     \__|  |_|      \__,_| |_| |_|  \___|  \__| |_|  \___/  |_| |_|
                                                                                                  
*/

/*
  Insert After Functions adds a node after the specified location.
*/

void insertAfter(Head *h, int data, int location){
    
    /*
      Checking if the location is head, if yes then calling the 'PUSH' function.
    */ 
    if(location == 0){
        push(h, data);
        return;
    }
    else{
        Node* new_node = new Node(data);

        Node* p = h->first;
        
        /*
          Traversing through the list.
        */
        for(int i=1; i<h->count; i++){
            
            /*
              Adding the node at given location.
            */
            if(i==location){
                new_node->next = p->next;
                p->next = new_node;
                h->count++;
                return;
            }
            p = p->next;
        }
    }

}