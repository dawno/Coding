#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int s=0;
    for(int i=a;i<=b;i++){
        float k = sqrt(i);
        if(k==floor(k)&&k==ceil(k)){
            s=s+1;
        }
    }
    cout<<s;
}
