/*
Butterfly Pattern for n=5

    *               *
    * *           * *
    * * *       * * *
    * * * *   * * * *
    * * * * * * * * *
    * * * *   * * * *
    * * *       * * *
    * *           * *
    *               *
*/

#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=4;i++){ //first half

        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        for(int j=0;j<(9-2*i);j++){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        cout<<"\n";
    }

    for(int i=0;i<9;i++){ //for middle star line
        cout<<"* ";
    }

    cout<<"\n";

    for(int i=4;i>0;i--){ //second half
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        for(int j=0;j<(9-2*i);j++){
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){
            cout<<"* ";
        }

        cout<<"\n";
    }
    return 0;
}