import java.io.*;
import java.util.Scanner;
import java.util.Arrays;
class florist{
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int n=in.nextInt();
        int arr[]=new int[n];
        int k=in.nextInt();
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();

        }
        Arrays.sort(arr);
        int c=1;
        int h= 0;
        int sum=0;
        for(int i=n-1;i>=0;i--){
          if(c<=k){
              sum=sum+(1+h)*arr[i];
              c++;
          }
          else{
              
              c=1;
              h++;
              sum=sum+(1+h)*arr[i];
              c=c+1;
          }
        }
       System.out.println(sum);
    }
}