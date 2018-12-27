#include<iostream>
#include<algorithm>
using namespace std;
int transaction(int Fs, int si[],int fe[],int n){
    int i, s;
       int B[n+1][Fs+1];


       for (i = 0; i <= n; i++)
       {
           for (s = 0; s <= Fs; s++)
           {
               if (i==0 || s==0)
                   B[i][s] = 0;
               else if (si[i-1] <= s)
                     B[i][s] = max(fe[i-1] + B[i-1][(s-si[i-1])],  B[i-1][s]);
               else
                     B[i][s] = B[i-1][s];
           }
       }

       return B[n][Fs];
    }


int main(){
    int n=12;
int fe[] = {887,1856,2307,1522,532,250,1409,2541,1147,2660,2933,686};
int size[]={57247,98732,134928,77275,29240,15440,70820,139603,63718,143807,190457,40572};
int max_size= 500000;
cout<<transaction(max_size,size,fe,n);
}
