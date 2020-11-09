/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Dutch National Flag algo to sort 0s, 1s and 2s

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int[]arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
		int n = arr.length;
		int low = 0;
		int mid = 0;
		int high = n-1;
		int temp;
		
		while(mid <= high)
		{
		    switch(arr[mid])
		    {
		        case 0:
		            {
		                temp = arr[low];
		                arr[low] = arr[mid];
		                arr[mid] = temp;
		                mid ++;
		                low ++;
		                break;
		            }
		       case 1:
		           {
		               mid ++;
		               break;
		           }
		     case 2:
		         {
		             temp = arr[high];
		             arr[high] = arr[mid];
		             arr[mid] = temp;
		             high --;
		             break;
		         }
		  
		    }
		}
		for(int i : arr)
	   {
	      System.out.print(i + " ");
	   }	
	}

}

