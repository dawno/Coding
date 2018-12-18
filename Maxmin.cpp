#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int max=-1,min=1000000000,minimum=1000000000,s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(s<k){
                if(max<arr[i]){
                    max=arr[i];
                }
                if(min>arr[i]){
                    min=arr[i];
                }
                s=s+1;
            }
            else{
                if(minimum>(max-min)){
                    minimum= max-min;
                }
                s=0;

            }
            if(i==(n-1)){
                if(minimum>(max-min)){
                    minimum= max-min;
                }
            }
        }
        cout<<minimum<<endl;

}
