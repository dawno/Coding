import java.io.*;
class Minjump{
    public static int jumpi(int arr[]){
        int []jump = new int[arr.length];
        jump[0] = 0;
        for(int i=1; i < arr.length ; i++){
            jump[i] = Integer.MAX_VALUE-1;
        }
        
        for(int i=1; i < arr.length; i++){
            for(int j=0; j < i; j++){
                if(arr[j] + j >= i){
                    if(jump[i] > jump[j] + 1){
                       // result[i] = j;
                        jump[i] = jump[j] + 1;
                    }
                }
            }
        }
        
        return jump[arr.length-1];
    }
    public static void main(String[]args){
        int arr[] = {2,3,1,1,4};
        System.out.println(jumpi(arr));
    }
}