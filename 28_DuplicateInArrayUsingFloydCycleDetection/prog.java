/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

// check floyd's cycle detection algo, which works only if there is only single dulpicate
// unlike the negative number approach that can spot multiple duplicates too 
// check out this blog for more info in case you dont understand this later:
//https://medium.com/solvingalgo/solving-algorithmic-problems-find-a-duplicate-in-an-array-3d9edad5ad41
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int [] arr = {1,2,3,4,4}; //assumption is there is definitely a duplicate here.
        int slow = 0;
        int fast = arr[arr[0]];
        while(slow != fast) //there will be definitely a cycle if there is definitely a duplicate
        {
            slow = arr[slow];
            fast = arr[arr[fast]];
        }
        
        //now start slow from 0 index and keep incrementing both slow and fast by 1 and when they are equal, duplicate is found
        slow = 0;
        while(slow != fast)
        {
            slow = arr[slow];
            fast = arr[fast];
        }
        
        System.out.println("duplicate is:  "  + slow); //slow or fast its same
	}
}

