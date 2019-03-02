import java.io.*;
import java.util.Scanner;
class sms{
    public static String msg(String str){
      int l=str.length();
      int count=0;
      String fase="", real="";
      String nw= "";
      for(int i=0;i<l;i++){
          if(str.charAt(i)==' '){
              if(count==real.length()){
                  nw=nw+" " +real;
                  count =0;
                  real="";
                  fase="";
              }else{
                  nw=nw+" "+fase;
                  count =0;
                  real="";
                  fase="";
              }

          }
          else{
               if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u'){
                 real= real+str.charAt(i);
                 count+=1;
               }
               else{
                fase= fase+str.charAt(i);
                real= real+str.charAt(i);
               }
          }
      }
      if(count==real.length()){
        nw=nw+" " +real;
        
    }else{
        nw=nw+" "+fase;
        
    }
    nw.trim();
      return nw;
    }
    public static void main(String[]args){
      String priyam= "My name is Priyam and I am a donkey ou ou";
   /*  Scanner in= new Scanner(System.in);
     String priyam = in.nextLine(); */
     String k= msg(priyam);
     char ch= k.charAt(1);
      System.out.println(ch);
    }
}