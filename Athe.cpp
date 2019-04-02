#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector< pair<int,int> > v;
 int n , q,x;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>x;
     v.push_back(make_pair(x,x));
 }
 cin>>q;
 int qn,a,b,c;
 int mini,maxi,mas;
 for(int i=0;i<q;i++){
  cin>>qn;
  if(qn==1){
    cin>>a;
    cin>>b;
    mini= min(v[a-1].first, v[b-1].first);
    maxi= max(v[a-1].second, v[b-1].second);
    //cout<<mini<<" "<<maxi;
    v[a-1].first=mini;
    v[a-1].second= maxi;
    v[b-1].first=mini;
    v[b-1].second=maxi;
  }
  else{

      cin>>c;

      mas= v[c-1].second- v[c-1].first;
      cout<<mas<<endl;
  }
 }
}
