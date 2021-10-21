#include<bits/stdc++.h>
using namespace std ;

// Given an array consisting of only 0's 1's and 2's 
// sort this array without using inbuilt sort function

void dutchNationalFlag(vector<int> &arr)
{
    // according to dutch national flag algo, we'll arrange these elements such that
    // all the elements to left of s are 0, elements between s+1 and e are 1 and after e all are 2
    int s = 0 , e = arr.size()-1, m = 0 ;

    while (m <= e)
    {
        if (arr[m] == 0) {
            swap(arr[s], arr[m]) ;
            s++ ; m++ ;
        }
        else if (arr[m] == 2) {
            swap(arr[m], arr[e]) ;
            e-- ;
        } else m++ ;
    }

}

int main()
{
     vector<int> arr{2,0,2,1,1,0} ;
     dutchNationalFlag(arr) ;
     for (auto x : arr) cout << x << " ";
}