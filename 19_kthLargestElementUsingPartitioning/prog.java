/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Find kth largest number using the partitioning technique:
//The technique is mainly that kth largest element would lie at (n-k)th position if array was sorted
// using partitioning, you keep bringing a pivot to it's correct position until pivot's position happens to be n-k
// and with each such partition function call, you can reduce the problem into left half or right half of the pivot
// in average case the complexity would be O(n) because with each iteration, scope of array reduces. check out swe video for detail on it


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
public static int partition(int[]arr, int low, int high)
{
    int pivot = high;
    int i = low;
    int j=low;
    int temp;
    
    while(j<high)
    {
        if(arr[pivot] >= arr[j])
        {
            
            // swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
        j++;
        
    }
    //final position of pivot lies at i+1 so swap:
    temp = arr[high];
    arr[high] = arr[i];
    arr[i] = temp;
    System.out.println("pivot returned: " + arr[i]);
    return (i); // 
}

public static int findKthLargest(int[]arr, int k, int low, int high)
{
    int n = arr.length;
    System.out.println("n-k is: "+ (n-k));
    if(low<high)
    {
        int p = partition(arr,low,high);
        
        if(p< n-k)
        {
            return findKthLargest(arr,k,p+1,high);
        }
        else if (p>n-k)
        {
            return findKthLargest(arr,k,low,p-1);
        }
        else
        {
            return arr[n-k];
        }
    }
    return -1;
    
}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int[]arr = {3,2,1,5,6,4};
		int n = arr.length;
		int k = 2;
		
		int val = findKthLargest(arr,k,0,n-1);
		
		System.out.println("kth largest is: " + val);
		
	}
}

