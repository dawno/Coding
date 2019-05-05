#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt1=0,cnt2=0,cnt3=0;
        int xo;
        for(int i=0;i<n;i++){
            xo=0^arr[i];
            for(int j=i+1;j<n-1;j++){
               xo=xo^arr[j];
               if(xo<k){
                 cnt1++;
               }
               else if(xo==k){
                   cnt2++;
               }
               else if(xo>k){
                   cnt3++;
               }

            }
        }
         cnt1++;
        int  a= cnt1+cnt2;
        int b= cnt2+cnt3;
        int c= cnt1+cnt3;
        int d= pow(cnt1,2)+pow(cnt2,2)+pow(cnt3,2);
        int ans= (pow(a,2)+pow(b,2)+pow(c,2)- d);
        int h= pow(10,9)+7;
       // ans=ans%h;
        //cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
        cout<<ans<<endl;
    }
}
