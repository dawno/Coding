#include<iostream>
#include<set>
using namespace std;
int main(){
set<int,greater<int> > s;
int n,m;
cin>>n>>m;
int k;
int sum=0;

for(int i=0;i<m;i++){
cin>>k;
s.insert(k);
auto it= s.find(k);

if(s.size()==1){
 sum=n+1;
}
else if(it==s.begin()){
    auto r= it;
    sum=sum+ ((*it)+1)+ ((*(++r))-1);

}
else if(it==(--(s.end()))){
    auto l= it;
    sum= sum+((*it)-1)+((*(--l))+1);

}
else{
    sum=sum+((*it)-1)+((*it)+1);
    
}
cout<<sum<<endl;
}
}
