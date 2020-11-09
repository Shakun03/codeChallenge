/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

//Move all negative numbers to the left side

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
       int [] arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
       int n = arr.length;
       int j = 0;
       int temp;
       for(int i=0 ; i<n; i++)
       {
           if(arr[i] < 0)
           {
               if(i != j) // j basically would contain the positive (if any) in such scenario
               {
                   temp = arr[i];
                   arr[i] = arr[j];
                   arr[j] = temp;
               }
               j++;
           }
           
       }
       for(int i : arr)
       {
           System.out.print(i + " ");
       }
       
       
	}

}

