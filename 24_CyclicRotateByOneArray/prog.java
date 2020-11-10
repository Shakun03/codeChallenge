/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Right rotate an array by one

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
        public static void rotateByOne(int[]arr)
    {
        int n = arr.length;
        int x = arr[n-1];
        for(int i= n-1; i>0 ; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = x;
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int[] arr1= {9, 8, 7, 6, 4, 2, 1, 3};
        rotateByOne(arr1);
        for(int i :arr1)
        {
            System.out.print(i + " ");
        }
	}
}

