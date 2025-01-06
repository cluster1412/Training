#include<iostream>
using namespace std;

int onlySetBit(int n){
    int b=n,count=0;
    while(b){
        if(b&1) break;
        count++;
        b = b>>1;
    }
    return count;
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    
    int ans = onlySetBit(a);
    cout<<"\nPosition of only set bit: "<<ans;
    return 0;
}
