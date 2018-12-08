#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> g1;
  for(int i = 1;i<=5;i++){
    g1.push_back(i);

  }
  cout<<g1.size()<<endl;
  cout<<g1.capacity()<<endl;
  cout<<g1.max_size();
  g1.resize(4);
  cout<<"g1 size "<<g1.size()<<endl;
  if(g1.empty()==false){
    cout<<"vector is not empty";
  }
  g1.shrink_to_fit();
  for(auto it = g1.begin();it!=g1.end();it++){
    cout<<*it<<" ";
  }
}
