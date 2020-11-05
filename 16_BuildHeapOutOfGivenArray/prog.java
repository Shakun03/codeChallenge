/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */

// Convert an array into max heap format array. Basically keep heapifying until max heap is created.
// To build a heap, start from mid and go all the way to start, at the end, you will get the heap.
// Algo is blindly start from mid, keep checking whether the index is at right place or not.
// if not, heapify it.
// then decrement index and do the same for that index 
// continue till the index reaches zero and in the end you will get the heap 
// this building of heap also happens to be the first step of Heap Sort


class Codechef
{
    public static void heapify(int[]arr, int i)
    {
        int n = arr.length;
        
        int root = i;
        int left = 2*i + 1;
        int right = 2*i + 2;
        
        if(left < n) //such that this root index is not leaf node, only then proceed else it's already at right position
        {
            if(arr[root] < arr[left])
            {
               root = left;
            }
        }    
        if(right < n) // you gotta check if right even exist like you checked for left
        {
            if(arr[root] < arr[right])
            {
               root = right;
            }
        }  
        // swap arr[i] with arr[root] if they dont happen to be the same after above comparisons
        // they will only happen to be the same if either the root is leaf, or already following max heap property
        if(i != root)
        {
            int temp = arr[root];
            arr[root] = arr[i];
            arr[i] = temp;
            
            heapify(arr,root); 
            // you need to handle this updated root until it finds it's right position in the heap
            // so keep calling recursively until it is at correct position
        }
        
        
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int[]arr = {10,6,7,5,15,17,12};
		int n =arr.length;
		
		for(int i=(n/2 - 1) ; i>=0; i--)
		{
		    heapify(arr,i);
		}
		
		//print the built max heap:
		for(int i : arr)
		{
		    System.out.println(i);
		}
		
	}
}

