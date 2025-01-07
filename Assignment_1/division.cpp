#include<iostream>
using namespace std;

int power(int a,int b){
    if (b==0) return 1;
    int p=1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;
}

int division(int dividend,int divisor){
    if (dividend==divisor) return 1;
    if(divisor==1) return dividend;
    if(divisor==-1 && dividend==INT32_MIN) return INT32_MAX;
    if(divisor==0){
        cout<<"Division from zero is not allowed!!"<<endl;
        return 0;
    }
    bool neg = (dividend<0)^(divisor<0);
    dividend=abs(dividend);
    divisor=abs(divisor);

    int count=0;
    while(dividend>=divisor){
        dividend-=(divisor*power(2,count));
        count++;
    }
    int ans=0,i=0;
    while(i<count){
        ans+=power(2,i);
        i++;
    }
    if(neg==1) return -ans;
    return ans;
}

int main(){
    int x,y;
    cout<<"Enter the dividend: ";
    cin>>x;
    cout<<"Enter the divisor: ";
    cin>>y;
    cout<<"\nThe Quotient is: "<<division(x,y);
    return 0;
}