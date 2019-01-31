import java.io.*;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
public class maxminsum{
    public static void main(String[]args){
Scanner in = new Scanner(System.in);
Integer []a = { 1, 2, 4, 8 }; 
        int n = a.length; 
        Arrays.sort(a);
        ArrayList<Integer> lt=new ArrayList<Integer>();
     for(int i=0;i<n/2;i++){
         lt.add(a[i]);
         lt.add(a[n-i-1]);
     }
     int sum=0;
     for(int i=0;i<n-1;i++){
         sum+= Math.abs(lt.get(i)-lt.get(i+1));
     }
     sum+= Math.abs(lt.get(n-1)-lt.get(0));
     System.out.println(sum);
    }
}