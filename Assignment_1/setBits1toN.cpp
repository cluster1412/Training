#include<iostream>
using namespace std;

int set1toN(int x){
    int i=1,b=0,count=0;
    while(i<=x){
        b=i;
        while(b){
            if(b&1) count++;
            b = b>>1;
        }
        i++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int ans = set1toN(n);
    cout<<"\nNumber of set bits from 1 to "<<n<<": "<<ans;;
    return 0;
}