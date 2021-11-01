#include<bits/stdc++.h>
using namespace std;
 
 // function to find the second largest element in an array

    int secondLargest(int arr[], int n)
    {
        // code here
        int max = 0, secondmax = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            {
                secondmax = max;
                max = arr[i];
            }
            else if(arr[i]>secondmax && arr[i]<max)
            {
                secondmax = arr[i];
            }
        }
        return secondmax;
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
