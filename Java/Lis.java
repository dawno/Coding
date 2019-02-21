import java.io.*;
import java.util.Arrays;
class Lis{
public static int li(int arr[]){
    int T[]= new int[arr.length];
    Arrays.fill(T,1);
    for(int i=0;i<arr.length;i++){
        for(int j=0;j<i;j++){
           if(arr[i]>arr[j]){
               if(T[j]+1>T[i]){
                   T[i]= T[j]+1;
               }
           }
        }
    }
    Arrays.sort(T);
    return T[T.length-1];

}
    public static void main(String[]args){
 int arr[] = {23,10,22,5,33,8,9,21,50,41,60,80,99, 22,23,24,25,26,27};
 System.out.println(li(arr));
    }
}