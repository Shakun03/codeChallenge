/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
  
public static int findMin(int[]arr)
{
    int min = Integer.MAX_VALUE;
    for(int i : arr)
    {
        if(min>i)
        {
            min = i;
        }
    }
    return min;
}
public static void main (String[] args) throws java.lang.Exception
{
   int[]array = new int[]{10,2,3,5,-4};
   System.out.println("min element is: " + findMin(array));
	
}
}

