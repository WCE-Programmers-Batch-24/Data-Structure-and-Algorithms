/*
  Method 2: Using Index Subtraction. 👇
            Displays the sinlge missing element in the *sorted array*.
*/
void singleMissing(int A[], int size){
    int first = A[0],
        last = A[size -1];
    
    
    //Difference between 0th element and it's index taken as base difference
    int diff = first - 0; 
    
    for(int i=0; i<size; i++){
        
        //If current difference(A[i] - i) not same as base difference then display the element.
        if((A[i] - i) != diff){ 
            cout<<i + diff<<endl;
            break;    
        }
    }
}