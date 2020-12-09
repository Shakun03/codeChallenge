#include <iostream>
using namespace std;

//Find maximum sum such that no two elements can't be consecutive
//this is DP solution using extra space. there is another approach that does not need extra space and uses DP

int maxStealing(int arr[], int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    if(n==2)
    {
        return max(arr[0], arr[1]);
    }
    
    int dp[n] ={0};
    
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    
    
    for(int i =2; i<n ;i++)
    {
        dp[i] = max(arr[i] + dp[i-2], dp[i-1]);
    }    
    
    return dp[n-1];
}

int main() {
	// your code goes here
	int arr[] = {6, 700, 1, 3, 18, 2, 4};
	int n = sizeof(arr)/sizeof(int);
	cout << maxStealing(arr,n);
	
	return 0;
}

