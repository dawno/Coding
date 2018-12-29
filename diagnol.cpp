#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int d1=0;int d2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<=i;j++){
         d1=d1+arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==(n-1)){
            d2=d2+arr[i][j];
        }

        }
    }
    //cout<<d1<<" "<<d2<<" ";
    int k = abs(d2-d1);
    cout<<k;
}
