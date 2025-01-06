#include<iostream>
using namespace std;

int setBits(int n){
    int b=n,count=0;
    while(b){
        if(b&1) count++;
        b = b>>1;
    }
    return count;
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int res=setBits(a);
    cout<<"\nNumber of set bits are: "<<res;
    return 0;
}