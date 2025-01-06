#include<iostream>
using namespace std;

int powerOfTwo(int n){
    int y=n-1,a=n;
    bool res=true;
    while(y){
        if(a&y){
            res=false;
            break;
        }
        y=y>>1;
        a=a>>1;
    }
    return res;
}

int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    
    int ans = powerOfTwo(x);
    if(ans==true) cout<<"Power of 2: true";
    else cout<<"Power of 2: false";
    return 0;
}