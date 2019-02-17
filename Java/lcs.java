import java.io.*;

public class lcs{

    public static int lc(char str1[],char str2[]){
        int L[][]=new int[str1.length+1][str2.length+1];
        for(int i=0;i<=str1.length;i++){
            for(int j=0;j<=str2.length;j++){
                if(i==0||j==0){
                    L[i][j]=0;
                }
                else if(str1[i-1]==str2[j-1]){
                    L[i][j]= L[i-1][j-1]+1;
                }
                else{
                    L[i][j]= Math.max(L[i-1][j],L[i][j-1]);
                }
            }
        }
        return L[str1.length][str2.length];

    }
public static void main(String[]args){
    String str1 = "ABCDGHLQR";
    String str2 = "AEDPHR";
      int k= lc(str1.toCharArray(),str2.toCharArray());
      System.out.println(k);
}
}