/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

// This negative number approach works even for more than one duplicates being present
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int [] arr = {1,3,3,4,4}; //from 1 to n, 2 and 5 are missing and are replaced by duplicates
		for(int i=0; i<arr.length; i++)
		{
		    if(arr[Math.abs(arr[i])] > 0 )
		    {
		        arr[Math.abs(arr[i])] = (-1) * arr[Math.abs(arr[i])];
		    }
		    else
		    {
		        System.out.println("duplicate: " + Math.abs(arr[i]));
		    }
		}
	}
}

