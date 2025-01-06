#include<iostream>
using namespace std;

int square(int n){
    if(n==0) return 0;

    int a=n,count=0,result=0;
    while(a){
        if(a&1) result += (n<<count);
        count++;
        a=a>>1;
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int ans=square(num);
    cout<<"\nSquare of "<<num<<": "<<ans;
    return 0;
}