#include<iostream>
using namespace std;
int main(){
    int n=3;
    int a1=0,b1=0;
    int arr[n], nrr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>nrr[i];
        if(arr[i]>nrr[i]){
            a1=a1+1;
        }
        if(arr[i]<nrr[i]){
            b1=b1+1;
        }
    }
    cout<<a1<<" "<<b1;
}
