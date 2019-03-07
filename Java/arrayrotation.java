import java.io.*;
class rotation{

    public static int[] leftrotation(int arr[],int d){
    int n=arr.length;
    int k[]= new int[n];
    d=d%n;
    for(int i=0;i<n;i++){
       if(i-(d)<0){
           int h= n+i-(d);
           k[h]= arr[i];
       }
       else{
           int h= i-d;
           k[h]=arr[i];
       }
    }
    return k;
    }
    public static void main(String[]args){
        int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
      int krr[]=  leftrotation(arr,26);
      for(int i:krr){
          System.out.print(i);
      }
    }
}