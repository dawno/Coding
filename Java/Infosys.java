import java.io.*;
import java.util.Scanner;
class Infosys{
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int total= in.nextInt();
        int no_fivecoins= in.nextInt();
        int no_onecoins= in.nextInt();
        int x= Math.min(no_fivecoins,total/5);
        int y= Math.min(total-(x*5),no_onecoins);
        if(((x*5)+y)==total){
            System.out.println(x);
            System.out.println(y);
        }
        else{
            System.out.println(-1);
        }
    }
}