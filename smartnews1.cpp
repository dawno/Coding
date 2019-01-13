// you can use includes, for example:
 #include <algorithm>
 #include<cstdlib>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
   int l= A.size();
   int maxi=-1;
   for(int i =0;i<l-1;i++){
       for(int j=i+1;j<l;j++){
           int ma= max(A[i],A[j]);
           int mi= min(A[i],A[j]);
           int h= abs(i-j);
           for(int k = 0;k<l;k++){
               if((A[k]<ma)&&(A[k]>mi)){
                   break;
               }else{
                   if(k==(l-1)){
                      maxi= max(maxi,h);
                   }
               }

           }
       }
   }
   return maxi;

}
