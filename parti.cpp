#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long  arr[n];
    long long total=1;
    for(int i=0;i<n;i++){
   cin>>arr[i];
   total*=arr[i];
    }

        long long curr = 1;
        int ans = -1;
        long long min = INT64_MAX;

        for (int i = 0; i < n; i++) {
            curr *= arr[i];
            long long h = total / curr;
            long long diff = abs(curr - h);
            if (min > diff) {
                min = diff;
                ans = i + 1;
            }
        }
        cout<<ans;
}
