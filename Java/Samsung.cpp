#include<iostream>
using namespace std;
int way(int arr[][],int n,int i,int j,int c){
if(i==0&&j==0){
    return c;
}
int ma= max(arr[i-1][j-1],max(arr[i-1][j],arr[i][j-1]));
if(ma==arr[i-1][j]&&ma==arr[i][j-1]&&i>0&&j>0){
c=c+ way(arr,n,i-1,j,c+1)+way(arr,n,i,j-1,c+1);
}
else if(ma==arr[i-1][j]&&ma==arr[i-1][j-1]&&i>0&&j>0){
c=c+ way(arr,n,i-1,j,c+1)+way(arr,n,i-1,j-1,c+1);
}
else if(ma==arr[i][j-1]&&ma==arr[i-1][j-1]&&i>0&&j>0)
c=c+way(arr,n,i,j-1,c+1)+way(arr,n,i-1,j-1,c+1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int w;
        int s=0;
        cin>>n;
        int arr[n][n];
        int maxi[n+1][n+1];
        int ways[n+1][n+1];
        bool nw[n][n];
        for(int i=n-1;i>=0;i--){
          for(int j=n-1;j>=0;j--){

              char c;
              cin>>c;
              if(c=='e'||c=='s'){
                  arr[i][j]=0;
                  continue;
              }
              if(c=='x'){
                  arr[i][j]=-1;
                  continue;
              }
              string s (1, c);
              arr[i][j]=stoi( s );

          }
        }
    for(int i=0;i<=n;i++){
        maxi[i][0]= 0;
        maxi[0][i]= 0;
        ways[i][0]=0;
        ways[0][i]=0;
    }



     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             if(arr[i-1][j-1]==-1){
                 maxi[i][j]=0;
                continue;
             }


            maxi[i][j]= arr[i-1][j-1]+max( max(maxi[i-1][j],maxi[i-1][j-1]),maxi[i][j-1]);
            if(maxi[i-1][j])

         }
     }
     ways[0][0]=1;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n ;j++){
             if(arr[i-1][j-1]==-1){
                 ways[i][j]=0;
                 continue;
             }
             ways[i][j]= ways[i-1][j]+ways[i-1][j-1]+ways[i][j-1];
             //cout<<ways[i][j];
         }
     }
       if(ways[n][n]==0){
           cout<<0<<" "<<0<<endl;
           continue;
       }
       else{
        int k= way(maxi,n,n,n,0);

           cout<<maxi[n][n]<<" "<<ways[n][n]<<endl;
       }

    }
}
