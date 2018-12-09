#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        int sum=0;
        cin>>str;
        int l = str.length();
    /*    if(l%2==0){
            cout<<"balanced";
            return 0;
        }
        else{
            cout<<"not balanced";
            return 1;
        } */
        for(int i=0;i<l;i++){
            if(str[i]=='[')
            {
                sum=sum+3;
            }
            else if(str[i]==']'){
                sum=sum-3;
            }else if(str[i]=='{'){
                sum=sum+2;

            }else if(str[i]=='}'){
                sum=sum-2;

            }else if(str[i]=='('){
                sum=sum+1;

            }else if(str[i]==')'){
                sum=sum-1;
            }
        }
        if(sum==0){
            cout<<"balanced"<<endl;

        }
        else{
            cout<<"not balanced"<<endl;
        }
    }

}
