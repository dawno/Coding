import java.io.*;
class circulararray{
    public static int cir(int arr[]){
        Arrays.sort(arr);
        int sum=0;
        for(int i=0;i<arr.length/2;i++){
            sum-=2*arr[i];
            sum+=2*arr[n-i-1];
        }
        return sum;
    }
    public static void main(String[]args){

    }
}