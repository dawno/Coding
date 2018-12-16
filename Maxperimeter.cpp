#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        long int n,max=-1;
        cin>>n;
         long int arr[n];
       long int trr[3];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++)
            if((arr[i]+arr[j]>arr[k])&&(arr[i]+arr[k]>arr[j])&&(arr[k]+arr[j]>arr[i])){
                if(max<(arr[i]+arr[j]+arr[k])){
                    max= arr[i]+arr[j]+arr[k];
                    trr[0]=arr[i];
                    trr[1]=arr[j];
                    trr[2]=arr[k];
                }
            }
        }
        }
        if(max!=-1){
        sort(trr,trr+3);
        cout<<trr[0]<<" "<<trr[1]<<" "<<trr[2]<<endl;}
        else{
            cout<<max<<endl;
        }
    }
