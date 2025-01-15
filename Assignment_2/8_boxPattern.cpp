/*
Draw the pattern for n=5

    5 5 5 5 5 5 5 5 5
    5 4 4 4 4 4 4 4 5
    5 4 3 3 3 3 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 2 1 2 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 3 3 3 3 4 5
    5 4 4 4 4 4 4 4 5
    5 5 5 5 5 5 5 5 5
*/

#include<iostream>
using namespace std;

int main(){
    // first half
    int n=5;
    int m=(2*n)-1;
    for(int i=1;i<n;i++){
        int a=n;
        for(int j=1;j<=i;j++){
            cout<<a--<<" ";
        }
        for(int j=0;j<(m-2*i);j++){
            cout<<n-i+1<<" ";
        }

        for(int j=0;j<i;j++){
            cout<<++a<<" ";
        }

        cout<<"\n"; // for new line
    }

    int b=-1,a=n;
    for(int i=0;i<m;i++){
        cout<<a<<" ";
        a+=b;
        if (a==1) b=1;
    }
    cout<<"\n";
    
    // second half
    for(int i=n-1;i>0;i--){
        int a=n;
        for(int j=1;j<=i;j++){
            cout<<a--<<" ";
        }
        for(int j=0;j<(m-2*i);j++){
            cout<<n-i+1<<" ";
        }

        for(int j=0;j<i;j++){ 
            cout<<++a<<" ";
        }

        cout<<"\n"; // for new line
    }

    return 0;
}