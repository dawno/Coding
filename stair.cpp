#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<m;k++){
            cout<<" ";
        }
    for(int j=1;j<=i;j++){
        cout<<"#";
    }
    m=m-1;
    cout<<endl;
    }
}
