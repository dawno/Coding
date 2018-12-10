#include<iostream>
using namespace std;
int isPalin(string str)
{

      string stn= str;
    int l = 0;
    int h = str.length() - 1;


    while (h > l)
    {
        if (str[l++] != str[h--])
        {

            return 0;
        }
    }
    return stn.length();
}
int main(){
    int t;
    cin>>t;
    while(t--){
      string str;
      int max=-999999,h,k;
      cin>>str;
      int n= str.length();
       int arr[n][n];
        for(int i=0;i<n;i++){
           for(int j=1;j<n-i+1;j++){
             arr[i][j-1]=isPalin(str.substr(i,j));

             if(arr[i][j-1]>max){
              h=i;
              k=j;
              max=arr[i][j-1];

             }
           }
       }


      cout<<str.substr(h,k)<<endl;
    }
}
