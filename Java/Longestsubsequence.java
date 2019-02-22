import java.io.*;
import java.util.Arrays;
class Longestsubsequence{
    public static int ls(int arr[]){
        int L[]= new int[arr.length];
int R[]=new int[arr.length];
Arrays.fill(L,1);
Arrays.fill(R,1);

for(int i=0;i<arr.length;i++){
    for(int j=0;j<i;j++){
        if(arr[j]<arr[i]){
            if(L[i]<L[j]+1){
                L[i]=L[j]+1;
            }
        }
    }
    
}
for(int i=arr.length-2;i>=0;i--){
for(int j=arr.length-1;j>i;j--){
    if(arr[i]>arr[j]){
        if(R[i]<R[j]+1){
            R[i]=R[j]+1;
        }
    }
}
}
int max=0;
for(int i=0;i<arr.length;i++){
    if(max< L[i]+R[i]-1){
        max= L[i]+R[i]-1;
    }
}
return max;
    }
    public static void main(String[]args){
        int arr[] = {1 ,11 ,2, 10 ,4 ,5 ,2, 1};
        System.out.println(ls(arr));
    }
}