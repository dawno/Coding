// you can also use imports, for example:
import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A) {
       int n= A.length;
       double sum =0;
       for(int i=0;i<n;i++){
           sum=sum+A[i];
       }
      
       double avg= Math.ceil(sum/n);
      
       Arrays.sort(A);
       double min= A[0];
       double max= A[n-1];
       double answer= Math.max(Math.abs(avg-min),Math.abs(max-avg));
       return (int)answer ;
       
    }
}