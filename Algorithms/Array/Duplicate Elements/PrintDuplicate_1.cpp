/*
  ____           _           _      ____                    _   _                  _                    ___ 
 |  _ \   _ __  (_)  _ __   | |_   |  _ \   _   _   _ __   | | (_)   ___    __ _  | |_    ___          |_ _|
 | |_) | | '__| | | | '_ \  | __|  | | | | | | | | | '_ \  | | | |  / __|  / _` | | __|  / _ \  _____   | | 
 |  __/  | |    | | | | | | | |_   | |_| | | |_| | | |_) | | | | | | (__  | (_| | | |_  |  __/ |_____|  | | 
 |_|     |_|    |_| |_| |_|  \__|  |____/   \__,_| | .__/  |_| |_|  \___|  \__,_|  \__|  \___|         |___|
                                                   |_|                                                                                                                                                   
*/

/*
  Printing the freq of each duplicate element. 👇
*/
void countDuplicates1(int A[], int size){
    int count = 0;

    for(int i=0; i<size; i++){

        // Checking for duplicates
        if(A[i] == A[i+1]){
            // j to traverse the duplciates
            int j = i+1;
            
            // counting the index of duplicates
            while(A[j] == A[i]) j++;

            count = j - i;
            cout<<A[i]<<" - "<<count<<" times"<<endl;

            // skiping the duplicates
            i = j - 1;
        }
    }
}