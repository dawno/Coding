#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
 vector< vector<int> > v;
 int n , q,x;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     vector<int> d;
     cin>>x;
      d.push_back(x);
      v.push_back(d);
 }
 cin>>q;
 int qn,a,b,c;
 for(int i=0;i<q;i++){
  cin>>qn;
  if(qn==1){
    cin>>a;
    cin>>b;
    v[a-1].insert(v[a-1].end(),v[b-1].begin(),v[b-1].end());
    v[b-1].insert(v[b-1].end(),v[a-1].begin(),v[a-1].end());
  }
  else{

      cin>>c;
     int max=0;

     for(int j=1;j<v[c-1].size();j++){
         if(abs(v[c-1][j]-v[c-1][j-1])>max){
             max=abs(v[c-1][j]-v[c-1][j-1]);
         }
     }
      cout<<max<<endl;
  }
 }
}
