// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<set>
vector<int> solution(int N, vector<int> &A) {
    vector<int> c;
    c.assign(N, 0);
     set<int>se;
     se.insert(0);
    for(int i=0;i<A.size();i++){
        if(A[i]<=N){
           c[A[i]-1]= c[A[i]-1]+1;
           se.insert(c[A[i]-1]);
        }
        else{
            int k= *se.end();
            c.assign(N,k-1);
        }
    }
    return c;
}
