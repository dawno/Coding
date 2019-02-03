import java.io.*;
import java.util.Scanner;
class twotwo{
    public static void main(String[]args){
        Scanner in = new Scanner(System.in);
       // int h= in.nextInt();
        int sum=0;
     //  while(h>0){
        //   h--;
        String n= in.next();
        int l= n.length();
        
        for(int i=0;i<l;i++){

            for(int m=i+1;m<=l;m++){
                if(n.charAt(i)=='0'){
                    continue;
                }
          int k=  Integer.valueOf(n.substring(i,m));
          if(k==0){
              continue;
          }
               if((int)(Math.ceil((Math.log(k) / Math.log(2)))) ==  
               (int)(Math.floor(((Math.log(k) / Math.log(2)))))){
               // System.out.println(k+" ");
                   sum=sum+1;
                   
               }
               else{
                   continue;
               }
        }
    }
       System.out.println(sum);
        sum=0;
    //}
    }
}