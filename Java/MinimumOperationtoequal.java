import java.io.*;
import java.util.HashMap;
import java.util.HashSet;
class minop{
    public static void minoper(int arr[],int n){
HashMap<Integer, Integer> hm= new Hashmap<Integer,Integer>();

   for(int i=0;i<n;i++){
       if(hm.contains(arr[i])){
           hm.put(arr[i],hm.get(i)+1);

       }
       else{
           hm.put(arr[i],1);
       }
   }
   int max=0;
   Hashset hs= hm.keySet();
   for(int i:hs){
       if(max<hm.get(i)){
           max= hm.get(i);
       }
   }
    }
    public static void main(String[]args){
        int arr[] = {1, 5, 2, 1, 3, 2, 1}; 
        int n = arr.length; 
      //  System.out.print(minoper(arr, n)); 
    }
}