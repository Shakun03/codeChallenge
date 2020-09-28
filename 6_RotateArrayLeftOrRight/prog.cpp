#include <iostream>
using namespace std;

/* 
  Rotate an array by k steps. if k> 0, rotate right else if k<0, rotate left.
  rotating an array k times left === rotating array n-k times right
  so essentially you need to code for rotating right.
  step 1: if k is huge, reduce it to k%need
  step 2: reverse array separately from 0 to n-k-1
  step 3: reverse array separately from n-k to n-1
  step 4: reverse the whole array.
*/

void swap(int &x, int &y)
{
    x = x*y;
    y = x/y;
    x = x/y;
}

void reverseArray(int arr[], int start, int end)
{
   int i = start;
   int j = end;
   while(i<j)
   {
       swap(arr[i], arr[j]);
       i++;
       j--;
   }
}

void rotateArray(int arr[], int n, int k)
{
   if(k<0)
   {
       k = k+n;
   }
   k = k%n; //essentially if k is huge, you don't need to actually rotate that many times.
   int start =0; 
   int end = n-k-1;
   reverseArray(arr,0,n-k-1);
   reverseArray(arr,n-k,n-1);
   reverseArray(arr,0,n-1);
    
}



int main() {
    int arr[] = {11, 1, 2 , 32, 5, 7, 9};
    int n = sizeof(arr)/sizeof(int);
    int k =-2;
    rotateArray(arr, n, k);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " " ;
    }
	return 0;
}

