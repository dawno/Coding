import java.io.*;
class minproduct{
    public static void main(String[]args){
        int a[] = { 2, 3, 4, 5, 4 }; 
    int b[] = { 3, 4, 2, 3, 2 }; 
    int n = 5, k = 3; 
    int temp=0;int res=0;int diff=0;
    for(int i=0;i<n;i++){
        int pro= a[i]*b[i];
        res= res+pro;
        if(b[i]<0&&pro<0){
            temp = (a[i]+2*k)*b[i];
        }
        else if(a[i]<0&&pro<0){
            temp= (a[i]-2*k)*b[i];
        }
        else if(a[i]>0&&pro>0){
            temp = (a[i]-2*k)*b[i];
        }
        else if(a[i]<0&&pro>0){
            temp= (a[i]+2*k)*b[i];
        }
        int d= Math.abs(pro-temp);
        if(d>diff){
            diff=d;

        }
    }
    System.out.println(res-diff);
    }
}