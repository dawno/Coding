import java.io.*;
import java.util.*;
 class train{
    public static void main(String[]args){
        Scanner in = new Scanner(System.in);
        
        int t=in.nextInt();
        for(int h=0;h<t;h++){
        int sum =0,mini= Integer.MAX_VALUE;
        int n= in.nextInt();
        int k= in.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
        arr[i]=in.nextInt();
             }
    Arrays.sort(arr);
    for(int i=k-1;i<n;i++){
      sum=0;
    for(int j=i-(k-1);j<=i;j++){
      sum= sum+ (arr[i]-arr[j]);
      
    }
   mini= Math.min(mini,sum);
    }
    System.out.println(mini);
    }
}}
