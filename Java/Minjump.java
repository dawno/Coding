import java.io.*;
class Minjump{
    public static int jumpi(int arr[]){
        int T[]= new int[arr.length];
        T[0]=0;
        for(int i=0;i<arr.length;i++){
            T[i]=Integer.MAX_VALUE-1;
        }
        for(int i=1;i<arr.length;i++){
            for(int j=0;j<i;j++){
                if(i<=arr[j]+j){
                  if(T[i]>T[j]+1){
                      T[i]= T[j]+1;
                  }
                }
            }
        }
        return T[T.length-1];
    }
    public static void main(String[]args){
        int arr[] = {2,3,1,1,4};
        System.out.println(jumpi(arr));
    }
}