#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str,nstr="",fstr="";
        cin>>str;
        int l = str.length();
        for(int i=0;i<l;i++){
            if(str[i]!='.'){
                nstr= nstr+str[i];

            }else{
                fstr= '.'+nstr+fstr;
                nstr="";
            }

        }
        fstr= nstr+fstr;
        cout<<fstr<<endl;

    }
}
