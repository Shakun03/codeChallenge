/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Dynamic programming solution for finding the min number of jumps needed to reach the end of the array.
// Each element corresponds to max no of steps you can take from that index.
//Solution is to keep storing every index's min jumps from arr[0] so that arr[n-1] has your final answer.
//check out this video in case you forget the approach: 
// https://www.youtube.com/watch?v=cETfFsSTGJI

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int[]arr= {1, 4, 6, 1, 0, 9};
		int n= arr.length;
		
		int[]jumps = new int[n];
		
		jumps[0] = 0;
		
		for(int i=1; i<n; i++)
		{
		    jumps[i] = Integer.MAX_VALUE;
		    for(int j=0; j<i; j++)
		    {
		        if(arr[j] + j >= i )
		        {
		            jumps[i] = Math.min(jumps[i], jumps[j] + 1 );
		            //break;   adding break makes it more efficent, works well without it too.
		        }
		    }
		}
		System.out.println("Min number of jumps needed: " + jumps[n-1]);
		
	}
}

