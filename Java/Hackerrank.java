import java.io.*;
import java.util.Scanner;
import java.util.Arrays;
class hackerrank{
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int n= in.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        Arrays.sort(arr);
        int k=arr[0];
        int sum=1;
        for(int i=0;i<n;i++){
           if(Math.abs(k-arr[i])<=4){
            continue;
           }
           else{
               sum++;
               
               k=arr[i];
               
           }
           
        }
        System.out.println(sum);

    }
}