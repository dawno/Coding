#include<iostream>
using namespace std;
int isPalin(string str)
{

    int l = 0;
    int h = str.length() - 1;
    //k=0;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {

            return 0;
        }
    }

    //cout<<k<<endl;
    return str.length();
}
int main(){
    int t;
    cin>>t;
    while(t--){
      string str;
      int max=0,h,k;
      cin>>str;
      int n= str.length();
       int arr[n][n];
       for(int j=0;j<n;j++){
           for(int i=0;i<j;i++){
             arr[i][j]=isPalin(str.substr(i,j));
             if(arr[i][j]>max){
              h=i;
              k=j;
              max=arr[i][j];
             cout<<h<<" "<<k<<"  ";
             }
           }
       }


       cout<<str.substr(h,k)<<endl;
    }
}
