// Problem url : https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1#

import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
	public static void main (String[] args)throws IOException
	{
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(read.readLine());
		
		while(t-- >0)
		{
		 
		    int n = Integer.parseInt(read.readLine());
		    long[] arr= new long[n];
		    for(int i=0;i<n;i++)
		        arr[i] = Long.parseLong(str[i]);
		    Solution ob = new Solution();
		    ob.rearrange(arr, n);
		    StringBuffer sb = new StringBuffer();
		    for(int i =0; i < n; i++)
		     sb.append(arr[i] + " ");
		    System.out.println(sb);
		}
	}
}

class Solution{
    
    // temp: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    public static void rearrange(long a[], int n){
        
      // int n = a.length;
       long[] temp = a.clone();
       int maxIndex = n-1;
       int minIndex = 0;
       int i=0;
       while(i<n){
           // even -> max
           if(i%2==0){
               a[i]=temp[maxIndex];
               maxIndex--;
           }
           // odd
           else{
               a[i] = temp[minIndex];
               minIndex++;
           }
           ++i;
       }
        
    }
    
}


