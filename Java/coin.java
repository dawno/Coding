import java.io.*;
public class coin{
    public int coi(int arr[],int m,int n){
             int T[]=new int[n+1];
           Arrays.fill(table,Integer.MAX_VALUE);
           table[0]=0;
           for(int i=0;i<arr.length;i++){
               for(int j=0;j<=n;j++){
                   if(i>=arr[j]){
                   if(T[i-arr[j]]+1>T[i])
                   T[i]=T[i-arr[j]]+1;
                   }
               }
           }
           return T[n];
    }
    public static void main(String[]args){
        int arr[] = {1, 2, 3}; 
        int m = arr.length; 
        int n = 4; 
    }
}