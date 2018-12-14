// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &A) {
    if(A.size()==1){
        if(A[0]>=K){
            return 1;
        }
        else{
            return 0;
        }
    }
     int sum=A[0];
     int c=0;
    for(int i=1;i<A.size();i++){
        if(sum<K){
            sum=sum+A[i];
           if(i==((A.size()-1))&&sum>K){
               c=c+1;
           }
        }
        else{
            c=c+1;
            sum=A[i];
        }
    }
    return c;
}
