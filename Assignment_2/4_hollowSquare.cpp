/*
Hollow square pattern for n=5

    1 2 3 4 5
    1       5
    1       5
    1       5
    1 2 3 4 5

*/

#include<iostream>
using namespace std;

int main(){
    
    for(int i=1;i<=5;i++){

        if(i==1 || i==5){  //first and last line
            for(int j=1;j<=5;j++){
                cout<<j<<" ";
                }
            }
        else{
            cout<<"1 ";
            for(int j=0;j<6;j++){ // for hollow square
                cout<<" ";
            }
            cout<<"5";
        }
        cout<<"\n";
    }
    return 0;
}