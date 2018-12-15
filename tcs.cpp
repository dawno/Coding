#include<iostream>
#include<string> // if we are using string we have to use it ...dont forget to use it there
using namespace std;
int main(){
    int t;// this variable is for test cases .
    //..test cases matlab multiple times input karwana hai to ..
    //..matlab na pta ho to dekh lena
    cin>>t;
    while(t--){ // this loop controls the test cases.
        string str, newString; // header me string include karna must hai
        int c=0; // this is the variable used to store the count of the characters
        cin>>str;
        int n= str.length();
         for(int i=0;i<n;i++){ // ye loop me pehla character uthaya hai
          for(int j=0;j<n;j++){ // ye loop ki help se har character se match kar sakte hain
            if(str[i]==str[j]){  // we are matching the characters in this.
                c=c+1;      // if it matches we add to the counter variable

            }


            }
        newString= newString + to_string(c)+ str[i]; // here the to string function will only work if you have included string in the header file
              // this function converts the integer to string so that the number can be added to the string.
          i=i+c-1; // now this is the most important line in the program ..
          //.here we are shifting the i to a new character ...otherwise ...it will again read the same character ..
          //.because the characters are occuring multiple times .
          //.so it will give the count of the same character again which we dont want.
           c=0; // we have to make it zero ...taki phrse zero se counting start ho

    }

        cout<<newString<<endl; // yaha print kara denge
    }
}
