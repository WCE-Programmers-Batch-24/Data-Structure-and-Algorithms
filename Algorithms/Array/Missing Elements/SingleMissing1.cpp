/*
  __  __   _               _                             ___ 
 |  \/  | (_)  ___   ___  (_)  _ __     __ _            |_ _|
 | |\/| | | | / __| / __| | | | '_ \   / _` |   _____    | | 
 | |  | | | | \__ \ \__ \ | | | | | | | (_| |  |_____|   | | 
 |_|  |_| |_| |___/ |___/ |_| |_| |_|  \__, |           |___|
                                       |___/                 
*/

/*
  Using sum of n terms. 👇
  Displays the sinlge missing element in the *sorted array*.
*/
void singleMissing(int A[], int size){
    int first = A[0],
        last = A[size-1];
    
    int sum = 0, s1 = 0, s2 = 0, c = 0;
    
    // Storing sum of array elements in 'sum'
    for(int i=0; i<size; i++){
        sum += A[i];
    }
    
    // Checking is (A[0] - 1) is Odd or Even 
    if((first-1) & 1){

        // if Odd
        s1 += (first-1)*(((first-1) + 1)/2);

    } // if Even
    else s1 += ( (first-1)/2 )*((first-1) + 1);
    
    // Checking is A[size-1] is Odd or Even 
    if((last & 1)){

        //if Odd
        s2 += last*((last + 1)/2);

    } // if Even
    else s2 += (last/2)*(last + 1);

    c += s2 - s1; // The expected sum


    /*
      Answer = Expected Sum - Array Sum
    */    
    cout<<c - sum<<"\n";
}
