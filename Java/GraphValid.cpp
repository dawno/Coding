#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        bool v=true;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                  if(arr[i][j]<0){
                    v= false;
                    i=n+5;
                    j=n+5;
                    k=n+5;
                    break;
                  }
                  else if(arr[i][j]!=0&& i==j){
                       v= false;
                    i=n+5;
                    j=n+5;
                    k=n+5;
                    break;
                  }else if(arr[i][j]!=arr[j][i]&& i!=j){
                        v=false;

                    i=n+5;

                    j=n+5;
                    k=n+5;
                    break;
                  }else if(j>i){
                      if(arr[i][k]+arr[k][j]<arr[i][j]){
                    v= false;
                    i=n+5;
                    j=n+5;
                    k=n+5;
                    break;
                      }
                  }
                }
            }
        }
        if(v){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
