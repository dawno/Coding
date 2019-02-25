import java.io.*;
class minsub{
    public static int mins(int arr[]){
        int count_zero=0;
        int count_neg=0;
        int max= Integer.MIN_VALUE;
        int pro=1;
        int posmin= Integer.MAX_VALUE;
        for(int i=0;i<arr.length;i++){
            if(arr[i]==0){
             count_zero+=1;
             continue;
            }
           if(arr[i]<0){
               count_neg+=1;
               max=Math.max(max, arr[i]);
           }
           if(arr[i]>0&&arr[i]<posmin){
               posmin= arr[i];
           }
           pro=pro*arr[i];
        }
        if(count_neg%2==0&&count_neg!=0){
            pro=pro/max;
        }
        return pro;
    }
    public static void main(String[]args){
        int a[] = { -1,-2, 0 }; 
        int n = 3; 
        System.out.println(mins(a));
    }
}