// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int l= A.size();
    int c=0;
    int max=0;
    int x,y;
    if(A[0]!=A[1]){
         x= A[0];
         y= A[1];

    }
    else{
       y=A[2] ;
    }
    for(int i=0;i<l;i++){
        if((A[i]==x)||(A[i]==y)){
            c=c+1;
        }
        else{
            if(c>max){
                max=c;
            }
        }
    }
    return c;
}
