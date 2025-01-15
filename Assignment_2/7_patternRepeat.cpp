/*
Draw the pattern for n=3

    *
    * *
    * * *
          *
          * *
          * * *
                *
                * *
                * * *
*/

#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<=(3*i);k++){
                cout<<" ";
            }
            for(int k=0;k<=j;k++){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}