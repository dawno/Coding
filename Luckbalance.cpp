#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    int l,c;
    cin>>n;
    cin>>k;
    int sum=0;int s=0;
    vector< pair<int ,int> > v;
    for(int i=0;i<n;i++){
        cin>>l;
        cin>>c;
        v.push_back(make_pair(l,c));
    }
    sort( v.begin(), v.end());
     for(int i=n-1;i>=0;i--){
         if(v[i].second ==0){
             sum= sum+v[i].first;
            // cout<<v[i].first<<" ";
         }
         else{
             s=s+1;
            if(s<=k){
                sum= sum+v[i].first;
                //cout<<v[i].first<<" ";
            }
            else{
                sum=sum-v[i].first;
                //cout<<v[i].first<<" ";
            }


         }
     }
     cout<<sum<<endl;
}
