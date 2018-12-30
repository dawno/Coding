#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int sum=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
for(int i=n-1;i>=0;i--){
     if(arr[i]==arr[i-1]){
         sum=sum+1;
     }
     else {
         break ;
     }
}
cout<<sum;
}
