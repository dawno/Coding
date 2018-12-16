#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str, nst;
        cin>>str;
        int c=1; // last wale ki tarah hai sab bs isme c= 1 se start kiya hai
        // kyuki element ek baar to atleast hoga he 
        //..we are not searching here..we are comparing
        int l= str.length();
        for(int i=0;i<l;i++){
            if(str[i]==str[i+1]){
                c=c+1;
            }
            else{
                nst= nst+ to_string(c)+str[i];
                c=1;
            }
        }
        cout<<nst<<endl;
    }

}
