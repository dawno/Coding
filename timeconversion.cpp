#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string duration="";
    string hr="";
    cin>>str;
    int l= str.length();
     hr= hr+str[0]+str[1];

     duration =duration+ str[l-2]+str[l-1];
     if(duration.compare("PM")==0){
         int h= stoi(hr)+12;
         if(h>23){
             h=h-12;
         }
         cout<<h;
         for(int i=2;i<l-2;i++){
            cout<<str[i];
         }
     }
     else{

         int h= stoi(hr);

         if(h==12){
             cout<<"00";
         }else if(h>9){
             cout<<h;
         }else if(h<9){
             cout<<"0";
             cout<<h;
         }
         for(int i=2;i<l-2;i++){
            cout<<str[i];
     }}
}
