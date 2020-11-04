/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
  
public static void reverseString(char[] arr)
{
        int start = 0;
        int end = arr.length - 1;
        char temp;
        while(start<end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start ++;
            end --;
        }
       
}
    
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T!=0)
		{
		    String str = sc.next();
		    char[] arr = str.toCharArray();
		    reverseString(arr);
		    String output = new String(arr);
		    System.out.println(output);
		    T --;
		}
	
	}
}

