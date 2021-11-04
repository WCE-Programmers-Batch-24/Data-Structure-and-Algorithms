/*
  ____           _           _      ____                    _   _                  _                    ___   ___ 
 |  _ \   _ __  (_)  _ __   | |_   |  _ \   _   _   _ __   | | (_)   ___    __ _  | |_    ___          |_ _| |_ _|
 | |_) | | '__| | | | '_ \  | __|  | | | | | | | | | '_ \  | | | |  / __|  / _` | | __|  / _ \  _____   | |   | | 
 |  __/  | |    | | | | | | | |_   | |_| | | |_| | | |_) | | | | | | (__  | (_| | | |_  |  __/ |_____|  | |   | | 
 |_|     |_|    |_| |_| |_|  \__|  |____/   \__,_| | .__/  |_| |_|  \___|  \__,_|  \__|  \___|         |___| |___|
                                                   |_|                                                            
*/

/*
  Printing the freq of each duplicate element using hashing. 👇
*/
void countDuplicates2(int A[], int size){
    
    // Finding min and max elements in the give array.
    int M = A[0], m = A[0];
    for(int i=0; i<size; i++){
        if(A[i]>M) M = A[i];
        else if(A[i]<m) m = A[i];
    }
    
    // Creating a hash table(simply a frequency array) of size M + 1
    int freq[M+1] = {0};
    for(int i=0; i<size; i++) freq[A[i]]++;
    
    // Printing the duplicate elements and their frequency
    for(int i=m; i<=M; i++){
        if(freq[i]>1) cout<<i<<" - "<<freq[i]<<" times"<<endl;
    }
}