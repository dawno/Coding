public class subset{
    public static boolean sub(int input[],int sum){
        boolean T[][]=new boolean [input.length+1][sum+1];
        for (int i = 0; i <= input.length; i++) {
            T[i][0] = true;
        }
        for (int i = 1; i <= sum; i++) 
        T[0][i] = false; 

        for(int i=1;i<=input.length;i++){
            for(int j=1;j<=sum;j++){
                if(j>=input[i-1]){
                    T[i][j]= T[i-1][j]||T[i-1][j-input[i-1]];
                }
                else{
                    T[i][j]=T[i-1][j];
                }
            }
        }
        return T[input.length][sum];
    }
    public static void main(String[]args){
        int set[] = {3, 34, 4, 12, 5, 2}; 
        int sum = 9; 
        System.out.println(sub(set,sum));
    }
}