/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Max sum contiguous sub array using DYNAMIC PROGRAMMING
/*simple approach: at each index, choose whether I wanna continue in my existing sub array journey
  or I wanna start from this particular index (you decide based on which is max)
  simultaneously keep maintaining your above choice int his variable max_so_far which basically
  keeps getting updated based on what is max so far and has the final result TypeNotPresentException
  check out back to back SWE video in case you forget the approach:
  https://www.youtube.com/watch?v=2MmGzdiKR9Y
*/
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static int maxHere(int a, int b)
    {
        return (a>b?a:b);
    }
    
    public static void maxContiguousSubArraySum(int[]arr)
    {
        int n = arr.length;
        int current_max = arr[0];
        int max_so_far = arr[0];
        for(int i=1; i<n; i++)
        {
            current_max = maxHere(arr[i],current_max+arr[i]);
            max_so_far = maxHere(max_so_far,current_max);
        }
        System.out.println("max maxContiguousSubArraySum is: " + max_so_far);
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int[] arr1= {-2, -3, 4, -1, -2, 1, 5, -3};
		int[] arr2 = {1,2,3,-2,5};
		int[] arr3 = {-1,-2,-3,-4};
		maxContiguousSubArraySum(arr3);
        
	}
}

