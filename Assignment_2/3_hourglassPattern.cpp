/*
Hourglass Pattern for n=5

    A B C D E F G H I
      A B C D E F G
        A B C D E
          A B C
            A
          A B C
        A B C D E
      A B C D E F G
    A B C D E F G H I

*/

#include<iostream>
using namespace std;

int main(){
    // first half
    for(int i=0;i<4;i++){

        for(int j=0;j<i;j++){ // for spaces
            cout<<"  ";
        }

        char c=65;
        for(int j=0;j<(9-2*i);j++){ //for characters
            cout<<c++<<" ";
        }

        for(int j=0;j<i;j++){ // for spaces
            cout<<"  ";
        }

        cout<<"\n"; // for new line
    }
    // second half
    for(int i=4;i>=0;i--){

        for(int j=0;j<i;j++){ // for spaces
            cout<<"  ";
        }

        char c=65;
        for(int j=0;j<(9-2*i);j++){ // for characters
            cout<<c++<<" ";
        }

        for(int j=0;j<i;j++){ // for spaces
            cout<<"  ";
        }

        cout<<"\n"; // for new line
    }
    return 0;
}