#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    long long int max=0; long long int min=0;long long int sum=0;

    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n);
min= sum-arr[n-1];
max= sum- arr[0];
cout<<min<<" "<<max<<endl;
}
