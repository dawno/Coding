import java.io.*;
import java.util.Scanner;
import java.util.PriorityQueue;
public class negation{
    
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        PriorityQueue<Integer> pr=new PriorityQueue<Integer>();
        int n=in.nextInt();
        int k=in.nextInt();
        
        for(int i=0;i<n;i++){
            pr.add(in.nextInt());
        }
        for(int i=0;i<k;i++){
            int h=pr.poll();
            h=h*(-1);
            pr.add(h);
        }
        int sum=0;
        for(int x:pr){
            sum=sum+x;
        }
        System.out.println(sum);
    }
}