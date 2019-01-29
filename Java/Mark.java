import java.io.*;
import java.util.Scanner;
import java.util.Arrays;
class mark{
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int n=in.nextInt();
        int k=in.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
         arr[i]=in.nextInt();
        }
        int sum=0;
        int c=0;
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            if(arr[i]<=k&(sum+arr[i])<k){
                sum+=arr[i];
               // System.out.println(sum+" ");
            
                c++;
                //System.out.println(c+" ");
            }
        }
        System.out.println(c);
    }
}