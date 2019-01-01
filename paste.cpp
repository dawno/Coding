#include<iostream>
#include<string>
using namespace std;
int match(string str1, string str2){
    int i=0;
    int c=0;
    int l= max(str1.length(),str2.length());
    while(l--){
     if(str1[i]==str2[i]){
         c=c+1;
     }
     else{
         return c;
     }
     i=i+1;
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int sum=0;
        int l=str.length();
        for(int i=0;i<l;i++){
            string k= str.substr(i,(i+l-(i+1)));
              sum=sum+match(k,str);
              //cout<<sum<<" ";
        }
        sum=sum+1;
        cout<<sum<<endl;
    }


}
