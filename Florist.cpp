#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,sum=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int c=0,s=1;
    for(int i=(n-1);i>=0;i--){
        if(c<k){
            sum= sum + arr[i]*s;

            c=c+1;

        }
        else{
            s=s+1;
            sum=sum+arr[i]*(s);

            c=0;
        }
    }
    cout<<sum<<endl;
}
