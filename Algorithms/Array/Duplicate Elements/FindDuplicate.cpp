/*
  ____                    _   _                  _          
 |  _ \   _   _   _ __   | | (_)   ___    __ _  | |_    ___ 
 | | | | | | | | | '_ \  | | | |  / __|  / _` | | __|  / _ \
 | |_| | | |_| | | |_) | | | | | | (__  | (_| | | |_  |  __/
 |____/   \__,_| | .__/  |_| |_|  \___|  \__,_|  \__|  \___|
                 |_|                                        
*/

/*
  Printing the duplicate elements (only once. 👇)
*/
void findDuplicates(int A[], int size){
    int last_duplicate = 0;

    for(int i=0; i<size; i++){

        // If the current element is not equal to the last duplicate element then print it
        if(A[i]==A[i+1] && A[i]!=last_duplicate){
            last_duplicate = A[i];
            cout<<A[i]<<" ";
        }
    }
}