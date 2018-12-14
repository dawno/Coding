// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {

    sort(A.begin(),A.end());
    if(A[0]<1&& A[1]!=1){
        return 1;
    }
    if(A.size()==1&& A[0]!=1){
        return 1;
    }
    if(A[0]==1){
    for(int i = 1; i<A.size();i++){

        if((A[i]!=A[i-1])&&(A[i]!=(A[i-1]+1))){
            return A[i-1]+1;
        }
        else{
            continue;
        }
    }
     return A[A.size()-1]+1;
    }
    else{

    }
}
