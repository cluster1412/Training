#include<iostream>
using namespace std;

int powerSet(int* arr,int n){
    int i=1;
    for(;i<n*n;i++){
        int s=i,pos=0;
        while(s){
            if(s&1) cout<<arr[pos]<<" ";
            pos++;
            s>>=1;
        }
        cout<<"\n";
    }
    return i;
}

int main(){
    int arr[]={1,2,3,4};
    int a=sizeof(arr)/sizeof(arr[0]);
    cout<<"Power set is: "<<endl;
    int n=powerSet(arr,a);
    cout<<"\nTotal elements for "<<a<<": "<<n;
    return 0;
}