#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=38){
        if(arr[i]%5==0){
            cout<<arr[i]<<endl;
            continue;
        }
    if(((((arr[i]/5)+1)*5)-arr[i])<3){
        int k = ((arr[i]/5)+1)*5;
        cout<<k<<endl;
    }else{
        cout<<arr[i]<<endl;
    }
}else{
    cout<<arr[i]<<endl;
}
}

}
