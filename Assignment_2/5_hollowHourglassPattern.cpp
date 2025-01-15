/*
Hollow Hourglass Pattern for n = 5

    A B C D E F G H I
      A           G
        A       E
          A   C
            A
          A   C
        A       E
      A           G
    A B C D E F G H I
*/
#include<iostream>
using namespace std;

int main(){
    char ch=65;
    for(int i=0;i<9;i++){ // first line
        cout<<ch++<<" ";
    }
    cout<<"\n";

    for(int i=1;i<=3;i++){
        ch=65;
        for(int j=1;j<=i;j++){ // spaces before A
            cout<<"  ";
        }
    
        for(int j=1;j<=(9-2*i);j++){ // hollow triangle
            if(j==1 || j==(9-2*i)){
                cout<<ch++<<" ";
            }
            else{
                cout<<"  ";
                ch++;
            }
        }
        cout<<"\n";
    }

    for(int i=4;i>0;i--){
        ch=65;
        for(int j=1;j<=i;j++){ // spaces before A
            cout<<"  ";
        }
    
        for(int j=1;j<=(9-2*i);j++){ // hollow triangle
            if(j==1 || j==(9-2*i)){
                cout<<ch++<<" ";
            }
            else{
                cout<<"  ";
                ch++;
            }
        }
        cout<<"\n";
    }
    ch=65;
    for(int i=0;i<9;i++){ // last line
        cout<<ch++<<" ";
    }
    return 0;
}