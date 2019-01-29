import java.io.*;
import java.util.Scanner;
class twopointer{
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int n= in.nextInt();
        int arr[]= new int[n];
        int d= in.nextInt();
        for(int i=0;i<n;i++){
            arr[i]= in.nextInt();
        }
        Arrays.sort(arr);
        int l=0;int r=n-1;
        int c=0;
        while(r>l){
            if(Math.abs(arr[r]-arr[l])==d){
                c=c+1;
            }
            if(Math.abs(arr[r]-arr[l])>d){
                l++;
            }
            else{
                r--;
            }
        }
        System.out.println(c);
    }
}