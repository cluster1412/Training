/*
Alphabet Pattern for n=5

    A                 A
    A B             B A
    A B C         C B A
    A B C D     D C B A
    A B C D E E D C B A

*/

#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=5;i++){

        char ch=65;
        for(int j=1;j<=i;j++){ // first triangle
            cout<<ch++<<" ";
        }

        for(int j=1;j<=(10-2*i);j++){ //for spaces
            cout<<"  ";
        }

        for(int j=1;j<=i;j++){ // second triangle
            cout<<--ch<<" ";
        }

        cout<<"\n"; // new line
    }
    return 0;
}