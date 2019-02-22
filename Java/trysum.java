import java.io.*;
import java.util.Scanner;
import java.util.Arrays;
class trysum{
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int sum= in.nextInt();
        int n=in.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]= in.nextInt();
        }
        Arrays.sort(arr);
        int l= 0, r= arr.length-1;
        int c=0;
        while(l<r){
            if(arr[l]+arr[r]==sum){
                l++;
                r--;
                c=c+1;
                continue;
            }
            if(arr[l]+arr[r]>sum){
                r--;
               
            }
            else{
                l++;
                
            }
        }
        System.out.println(c);
    }
}