import java.io.*;
class maxproduct{
    int maxi(int arr[],int n){
        if(n==1){
            return arr[0];
        }
        int count_zero=0;
        int posmin=Integer.MAX_VALUE;
        int count_pos=0,count_neg=0;
        int negmax= Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
if(arr[i]==0){
    count_zero+=1;
    continue;
}
if(arr[i]<0){
    count_neg+=1;
    negmax= Math.max(negmax,arr[i]);
}
product*=arr[i];

    
} 
if(count_zero==n){
    return 0;
}   
if(count_neg%2==1){
    if(count_neg==1&& count_zero>0&&count_neg+count_zero==n){
        return 0;
    }
    product=product/negmax;
}   
return product;
    }
    public static void main(String[]args){

    }
}