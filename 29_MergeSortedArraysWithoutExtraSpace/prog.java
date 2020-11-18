/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Merge two sorted arrays such that traversing from arr1 and then from arr2 together is sorted.
// example in the input arrays below, output should be changed like this:
// arr1 = [1,2,3,5,8,9]
// arr2 = [10,13,15,20]
// This is an awesome approach that you will tend to forget, so refer this video:
// https://www.youtube.com/watch?v=NWMcj5QFW74

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int [] arr1 = {1, 5, 9, 10, 15, 20}; 
        int [] arr2 = {2, 3, 8, 13};
        int m = arr1.length;
        int n = arr2.length;
        
        for(int i=n-1; i>=0; i--)
        {
            int last = arr1[m-1];
            int j;
            for(j=m-2; j>=0 && arr1[j] > arr2[i] ; j--)
            {
                arr1[j+1] = arr1[j];
            }
            if(j != m-2 || last>arr2[i]) 
            {
                arr1[j+1] = arr2[i];
                arr2[i] = last;
            }
        }
        for(int a : arr1)
        {
            System.out.print(a + " ");
        }
        for(int b : arr2)
        {
            System.out.print(b + " ");
        }
	}
}

