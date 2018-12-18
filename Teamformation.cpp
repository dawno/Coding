#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=1,cmin;
        cin>>n;
        cmin=n;
        if(n==0){
            cout<<0;
            return 0;
        }
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr,arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]==(arr[i+1]-1)){
                c=c+1;
            }
            else{
                //cout<<" "<<c<<" ";
            if(cmin>c){
                    cmin=c;
                }
                c=1;
            }
            if(i==n-1&&(arr[i]!=(arr[i-1]+1))){
                //cout<<" v";
                cmin=1;
            }
        }
        cout<<cmin<<endl;
    }
}
