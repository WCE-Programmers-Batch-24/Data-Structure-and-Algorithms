/*
  __  __   _               _                             ___   ___   ___  
 |  \/  | (_)  ___   ___  (_)  _ __     __ _            |_ _| |_ _| |_ _| 
 | |\/| | | | / __| / __| | | | '_ \   / _` |   _____    | |   | |   | |  
 | |  | | | | \__ \ \__ \ | | | | | | | (_| |  |_____|   | |   | |   | |  
 |_|  |_| |_| |___/ |___/ |_| |_| |_|  \__, |           |___| |___| |___| 
                                       |___/                              
*/

/*
  Method 2: Using Index Subtraction. 👇
            Displays the missing element in the *sorted array*.
*/

void multipleMissing(int A[], int size){
    
    // Difference between 0th element and it's index taken as base difference
    int diff = A[0] - 0;

    for(int i=0; i<size; i++){

        // If current difference(A[i] - i) not same as base difference then display the element.
        if( (A[i] - i)!= diff ){

            // Printing the element and increasing the base difference till it equals to current difference.
            while (diff < (A[i]-i)){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }

    cout<<"\n";
}