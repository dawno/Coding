import java.io.*;
import java.util.Scanner;
import java.util.Arrays;
class maxmin{
static int minproduct(int a[],int n){
    if(n==1){
        return a[0];
    }
int negmax= Integer.MIN_VALUE;
int posmin= Integer.MAX_VALUE;
int count_neg=0, count_pos=0,count_zero=0, product=1;
for(int i=0;i<n;i++){
   
    if(a[i]==0){
        count_zero+=1;
        continue;
    }
    if(a[i]<0){
        count_neg+=1;
        negmax= Math.max(negmax,arr[i]);
        continue;
    }
    if(arr[i]>0){
        count_pos+=1;
        posmin= Math.min(posmin,arr[i]);
    }
      product*=arr[i];

}
           if(count_zero==n|| count_neg==0&&count_zero>0){
               return 0;
           }
           if(count_neg==0){
               return posmin;
           }
           if(count_neg%2==0&&count_neg!=0){
               product= product/negmax;
           }
           return product;
}
    public static void main(String[]args){
       
}}