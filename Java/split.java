import java.io.*;
class split{
    public static void main(String[]args){
        int n = 90; 
        int c=-1;
        if(n<4){
            c=-1;
        }
        int rem=n%4;
         if(rem==0){
             c= n/4;
         }
         if(rem==1){
             if(n<9){
                 c=-1;
             }
             c= (n-9)/4+1;
         }
         if(rem==2){
             c= (n-6)/4+1;
         }
         if(rem == 3){
             if(n<15){
                 c=-1;

             }
             c= (n-15)/4+2;
         }
         System.out.println(c);
    }
}