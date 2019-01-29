import java.io.*;
import java.util.Scanner;
class pair{
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int n= in.nextInt();
        int arr[]=new int[n];
        int d=in.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        int c=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
              if(Math.abs(arr[i]-arr[j])==d){
                  c=c+1;
              }
            }
        }
        System.out.println(c);
    }
}