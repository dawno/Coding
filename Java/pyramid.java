import java.io.*;
class pyramid{
    static int maxLevel(int []boxes,int n){
        Arrays.sort(boxes);
        int ans=1;
        int previous_width=boxes[0];
        int previous_count= 0;
        int curr_count=0;
        int curr_width=0;
        for(int i=1;i<n;i++){
            curr_width+=boxes[i];
            curr_count+=1;
            if(curr_width>previous_width&& curr_count>previous_count){
                previous_width=curr_width;
                previous_count= curr_count;
                ans+=1;
            }
        }

     return ans;
    }
    public static void main(String []args){

    }
}