#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0,mini=1000000;

    for(int i=k-1;i<n;i++){
      sum=0;
    for(int j=i-(k-1);j<=i;j++){
      sum= sum+ (arr[i]-arr[j]);

    }
   mini= min(mini,sum);
    }
    mini= min(mini,sum);
    cout<<mini;
    }
}
