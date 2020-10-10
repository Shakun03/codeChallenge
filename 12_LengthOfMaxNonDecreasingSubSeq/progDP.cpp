#include <iostream>
#include<bits/stdc++.h>  
using namespace std;

// Find length of longest non-decreasing subsequence. Used Dynamic programming.
// check out this video if you ever forget the approach or cannot understand by code:
// https://www.youtube.com/watch?v=fV-TF4OvZpk

int len(int arr[], int n)
{
    int i=0;
    int j=1;
    int sol[n];
    //initialize solution array elements to 1. because that's the min possible length.
    for(int b=0; b<n; b++)
    {
        sol[b] = 1;
    }
    for(int j=1; j<n; j++)
    {
        while (i < j)
        {
            if(arr[i] <= arr[j])
            {
                sol[j] ++;
            }
            i++;
        }
        i = 0;
    
    }
    // now find the max element in the solution array and thats your answer
    int maxx = *max_element(sol, sol + n);  //built in c++ function . include bits library
    return maxx;
}


int main() {
    int arr[] = {-1,3,4,5,2,2,2,2};  
    int n = sizeof(arr)/sizeof(int);
    cout << "Length: " << len(arr,n) << endl;
	// your code goes here
	return 0;
}

