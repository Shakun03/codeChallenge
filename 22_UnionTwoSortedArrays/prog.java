/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Print union of two sorted arrays: O(m+n)

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void printUnion(int[]arr1, int[]arr2, int m, int n)
    {
        int i=0,j=0;
        
        while(i<m && j<n)
        {
            if(arr1[i] < arr2[j])
            {
                System.out.print(arr1[i] + " ");
                i++;
            }
            else if(arr1[i] > arr2[j])
            {
                System.out.print(arr2[j] + " ");
                j++;
            }
            else
            {
                System.out.print(arr1[i] + " ");
                i++;
                j++;
            }
        }
        while(i<m)
        {
            System.out.print(arr1[i] + " ");
            i++;
        }
        while(j<n)
        {
            System.out.print(arr2[j] + " ");
            j++;
        }

    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int[] arr1= {1, 2, 4, 5, 6 };
		int[] arr2 = {2, 3, 4, 5, 7};
		int m = arr1.length;
		int n = arr2.length;
		printUnion(arr1,arr2,m,n);
	}
}

