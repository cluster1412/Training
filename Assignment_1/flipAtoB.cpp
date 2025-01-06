#include<iostream>
using namespace std;

int flip(int a,int b){
    int x=a^b,count=0;
    while(x){
        if(x&1) count++;
        x=x>>1;
    }
    return count;
}

int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    int ans = flip(a,b);

    cout<<"\nNumber of bits to be flipped to convert ";
    cout<<a<<" to "<<b<<": ";
    cout<<ans;
    return 0;
}