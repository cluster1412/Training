/*
Draw the pattern for n=5

    *****         *****
      ****       ****
        ***     ***
          **   **
            * *
          **   **
        ***     ***
      ****       ****
    *****         *****
*/

#include<iostream>
using namespace std;

int main(){
    int n=15;
    int m=(2*n)-1;
    for(int i=0;i<n;i++){

        for(int j=0;j<=i;j++) cout<<"  ";

        for(int j=0;j<n-i;j++) cout<<"*";

        for(int j=0;j<(m-2*i);j++) cout<<" ";

        for(int j=0;j<n-i;j++) cout<<"*";
    
        cout<<"\n";
    }

    for(int i=n-2;i>=0;i--){

        for(int j=0;j<=i;j++) cout<<"  ";

        for(int j=0;j<n-i;j++) cout<<"*";

        for(int j=0;j<(m-2*i);j++) cout<<" ";

        for(int j=0;j<n-i;j++) cout<<"*";
    
        cout<<"\n";
    }
    return 0;
}