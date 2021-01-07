#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int mooreVotingFun(int arr[], int n)
{
    int count1 = 0;
    int count2 = 0;
    
    int first = INT_MAX;
    int second = INT_MAX;
    
    for(int i=0; i<n ; i++)
    {
        if(arr[i] == first)
        {
            count1++;
        }
        else if(arr[i] ==second)
        {
            count2 ++;
        }
        else if(count1 == 0)
        {
            first = arr[i];
            count1 ++;
        }
        else if(count2 == 0)
        {
            second = arr[i];
            count2 ++;
        }
        else
        {
            count2 --;
            count1 --;
        }
    }
    
    count1 = count2 = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == first)
        {
            count1++ ;
        }
        else if(arr[i] == second)
        {
            count2++ ;
        }
    }
    if(count1 >= n/3)
    {
        return first;
    }
    else if(count2 >= n/3)
    {
        return second;
    }
    
    return 0;
}

int main() {
	// your code goes here
	int arr[] = {2,4,5,6,7,3,9,7,7};
	int n = sizeof(arr)/sizeof(int);
	
	cout << "result is: " << mooreVotingFun(arr,n);
	return 0;
}

