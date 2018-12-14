// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
 #include <set>
int solution(int X, vector<int> &A) {
    set <int > g;
    set <int > t;
    int k = g.size();
    int S=X;
    int c=X;
    for(int i =0;i<A.size();i++){
        if(A[i]<=X&&c!=0){
             g.insert(A[i]);
            if(k!=g.size()){
           c=c-1;
        S=X-g.size();
        t.insert(i);
        }}
       

    }
     if(S==0){
            return *t.end();
        }
        else {
            return -1;
        }
}
