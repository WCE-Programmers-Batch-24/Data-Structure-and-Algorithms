/*
  __  __   _               _                             ___  __     __
 |  \/  | (_)  ___   ___  (_)  _ __     __ _            |_ _| \ \   / /
 | |\/| | | | / __| / __| | | | '_ \   / _` |   _____    | |   \ \ / / 
 | |  | | | | \__ \ \__ \ | | | | | | | (_| |  |_____|   | |    \ V /  
 |_|  |_| |_| |___/ |___/ |_| |_| |_|  \__, |           |___|    \_/   
                                       |___/                           
*/

/*
  Method -2 Using Freq Array or Simple Hashing. 👇
            A frequency array is used.
*/
void multipleMissing2(int A[], int size){
    
    // Finding the min(m) and max(m) element in the given array.
    int M = A[0], m = A[0];
    for(int i=0; i<=size; i++){
        if(A[i]>M) M = A[i];
        else if(A[i]<m) m = A[i];
    }
    
    //   Checking whether 1 is absent or not. If absent then making m = 1.
    //   Use when elements are supposed to start from 1.
    if(m!=1){
        m = 1;
    }
    
    // New array to store the frequency/occurence of each element.
    int freq[M] = {0};
    for(int i=0; i<=size; i++){
        freq[A[i]]++;
    }

    // Displaying those elements whose frequency is 0 i.e. missing elements.
    for(int i=m; i<=M; i++){
        if(freq[i] == 0) cout<<i<<" ";
    }
}