import java.util.Scanner;

class near{
    public static int palin(int num){
        String n= Integer.toString(num);
        StringBuilder bu= new StringBuilder(n);
        int r=n.length()-1;
        int l=0;
       while(r>l){
           int right= bu.charAt(r);
           int left = bu.charAt(l);
           if(right>left){
               bu.setCharAt(l, (char)right);;
           }
           else{
            bu.setCharAt(r, (char)left);
           }
           r--;
           l++;
       }

        int m= Integer.parseInt(bu.toString());
        return m;
    }
    public static void main(String[]args){
        Scanner in= new Scanner(System.in);
        int h= in.nextInt();
        System.out.println(palin(h));
    }
}