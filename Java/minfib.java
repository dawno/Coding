import java.io.*;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;
class minfib{
    public void main(String[]args){
        Scanner in = new Scanner(System.in);
        int k=in.nextInt();
        ArrayList<Integer> li= new ArrayList<Integer>();
        int i=3;
        li.add(0);
        li.add(1);
        li.add(1);
        while(true){
            int next= li.get(i-1)+li.get(i-2);
            if(next<=k){
            li.add(next);
            i++;
        }
        else{
            break;
        }
            
        }
        Collections.sort(li,Collections.reverseOrder());
        int j=0;
        while(k>0){
            count = count+ k/li.get(j);
            k= k%li.get(j);
            j++;
        }
        System.out.println(count);
    }
}