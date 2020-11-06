/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

// HEAP SORT COMPLEXITY IS O(n*logn)

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
		
		//Build Max heap out of this array:
		for(int i = n/2 - 1; i>=0 ; i--)
		{
		    heapify(arr,i,n);
		}
		//Max Heap created as follows: {17,15,12,5,6,7,10}
		System.out.println("Max Heap formed out of array as follows:");
		for(int i : arr)
		{
		    System.out.print(i + " ");
		}
		System.out.println();
		// Phase 2 of Heap Sort: Extract root by swapping first element(root) with last element
		// and rearrange to heapify. then reduce array size and repeat extraction and heapify.
		
		for(int i=n-1; i>=0; i--)
		{
		    // swap root(arr[0]) with last element arr[i] , i keeps decreasing with each iteration
		    int temp = arr[0];
		    arr[0] = arr[i];
		    arr[i] = temp;
		    //heapify root for the remaining array again at each step:
		    heapify(arr,0,i);
		}
		System.out.println("Sorted array using heap sort:");
		//Array sorted at the end:
		for(int i:arr)
		{
		    System.out.print(i + " ");
		}
	}
}

