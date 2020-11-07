
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

// Find kth smallest element in an array using heap. complexity: O((n-k)*logk)
// If you have to find kth smallest, you use max heap so that you keep swapping unnecessary large root
// and if you want to find kth largest, you use min heap
// Algo: first build max heap only for first k elements
// then for remaining n-k elements, keep comparing them one by one with root i.e arr[0]
// and if the element is lesser than root, it deserves to be swapped with arr[0]
// keep doing this and at the end you get kth smallest element in position 0 of array.

class Codechef
{
    public static void heapify(int[]arr, int i, int n)
    {
        int left = 2*i + 1;
        int right = 2*i + 2;
        int root = i;
        int temp;
        
        if(left < n)
        {
            if(arr[left] > arr[root])
            {
               root = left;
            }
        }   
        if(right < n)
        {
            if(arr[right] > arr[root])
            {
               root = right;   
            }
        }
        if(root != i)
        {
            //swap
            temp = arr[i];
            arr[i] = arr[root];
            arr[root] = temp;
            
            heapify(arr,root,n);
        }
            
        
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int[]arr = new int[]{10,6,7,5,15,17,12};
		int n = arr.length;
		int k =5;
		
		//Build Max heap out of this array:
		for(int i = 0; i<k ; i++)
		{
		    heapify(arr,i,k);
		}
		//Max Heap created as follows: {17,15,12,5,6,7,10}
		System.out.println("Max Heap formed out of array as follows:");
		for(int i : arr)
		{
		    System.out.print(i + " ");
		}
		System.out.println();
		int temp;
		for(int i=k; i<n; i++)
		{
		    if(arr[0] > arr[i])
		    {
		        // swap them
		        temp = arr[0];
		        arr[0] = arr[i];
		        arr[i] = temp;
		    }
		    heapify(arr,0,k);
		}
		System.out.println("kth smallest element is: " + arr[0]);
	    
	}
}



