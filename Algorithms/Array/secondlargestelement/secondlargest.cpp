#include<bits/stdc++.h>
using namespace std;
 
 // function to find the second largest element in an array

    int secondLargest(int arr[], int n)
    {
        // code here
     
        int max = 0, secondmax = 0;
     
        // if size of array is less than 2 then there is no second largest element
        if(n<2){
          cout<<"No second large element";
          return;
        }
     
        for(int i=0;i<n;i++)     // loop to traverse array
        {
            if(arr[i]>max)        // If current element is greater than first then update both max and secondmax 
            {
                secondmax = max;  
                max = arr[i];
            }
            else if(arr[i]>secondmax && arr[i]<max) // If arr[i] is in between max and secondmax then update secondmax 
            {
                secondmax = arr[i];
            }
        }
        return secondmax;   // return second max
    }

    int main()
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout << "Second largest element is " << secondLargest(arr, n);
        return 0;
    }
