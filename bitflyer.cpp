#include<iostream>
#include<algorithm>
using namespace std;
float transaction(int Fs, float si[],float fe[],int n){
    int i, s;
       float B[n+1][Fs+1];


       for (i = 0; i <= n; i++)
       {
           for (s = 0; s <= static_cast<int>(Fs); s++)
           {
               if (i==0 || s==0)
                   B[i][s] = 0;
               else if (si[i-1] <= s)
                     B[i][s] = max(fe[i-1] + B[i-1][static_cast<int>(s-si[i-1])],  B[i-1][s]);
               else
                     B[i][s] = B[i-1][s];
           }
       }

       return B[n][Fs];
    }


int main(){
float fe[] = {0.0887,0.1856,0.2307,0.1522,0.0532,0.0250,0.1409,0.2541,0.1147,0.2660,0.2933,0.0686};
float size[]={57247,98732,134928,77275,29240,15440,70820,139603,63718,143807,190457,40572};
int max_size= 500000;
cout<<transaction(max_size,size,fe,12);
}
