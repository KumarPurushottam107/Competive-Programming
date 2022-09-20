/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    static Scanner sc = new Scanner(System.in);
    
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		
		int t ; 
		t = sc.nextInt() ; 
		
		while(t>0)
		{
		    int n , p ; 
		    
		    n = sc.nextInt() ; p = sc.nextInt();
		    
		    if(p<3)
		    {
		        System.out.println("impossible");
		    }
		    else
		    {
		       StringBuffer ans = new StringBuffer("") ; 
		       
		       StringBuffer part = new StringBuffer("") ; 
		       
		       for(int j = 0 ; j<p ;j++)
		       {
		           if((j == 0) || j == (p-1))
		           {
		               part.append('a');
		           }
		           else 
		            part.append('b');
		       }
		       
		       
		       int total = n/p; 
		       
		       for(int g = 0 ; g<total ; g++)
		       {
		           ans.append(part);
		       }
		       
		       
		      System.out.println(ans);
		        
		    }
		    
		    t--;
		}
		
	}
}
