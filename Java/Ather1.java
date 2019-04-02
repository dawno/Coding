import java.io.*;
import java.util.*;
class ather1{
  public static void main(String[]args){
    Scanner in= new Scanner(System.in);
    int t;
    t=in.nextInt();
    for(int i=0;i<t;i++){
       int n=in.nextInt();
       int arr[]=new int[n];
       for(int j=0;j<n;j++){
         arr[j]= in.nextInt();
       }
       int h= arr[0];
       String f= "a";
       char s = 'a';
       for(int k=1;k<n;k++){
         if((arr[k-1]>arr[k])|| (arr[k]-arr[k-1]>1)){
           System.out.println(-1);
           return ;
         }
         else if(arr[k]-arr[k-1]==1){
           s= (char)((int)s+1);
            f=f+s ;
         }
         else{
           f=f+s;
         }
       }
       System.out.println(f);
    }

  }
}
