#include <iostream>
using namespace std;

//Find maximum sum such that no two elements can't be consecutive
//this is DP solution without using extra space.

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
    
    int val2 = arr[0]; //val2 means 2 steps prev
    int val1 = max(arr[0],arr[1]); //val1 means prev immediate
    
    int result;
    
    for(int i =2; i<n ;i++)
    {
        
        result = max(arr[i] + val2, val1);
        val2 = val1;
        val1 = result;
    }    
    
    return result;
}

int main() {
	// your code goes here
	int arr[] = {6, 7, 1, 3, 8, 2, 4};
	int n = sizeof(arr)/sizeof(int);
	cout << maxStealing(arr,n);
	
	return 0;
}

