#include<iostream>
#include<vector>
using namespace std;

vector<int> twoNonRepeating(vector<int>& nums){
    int xorall=0;
    for(int num:nums){
        xorall^=num;
    }
    xorall = xorall & ~(xorall-1);
    
    int num1=0,num2=0;
    for(int i:nums){
        if(xorall & i) num1^=i;
        else num2^=i;
    }
    vector<int> ans;
    ans.push_back(num1);
    ans.push_back(num2);
    return ans;
}

int main(){
    vector<int> a={1,2,5,3,4,2,1,3,9,9};
    vector<int> b = twoNonRepeating(a);
    cout<<"The two non repeating elements are: "<<b[0]<<" and "<<b[1];
    return 0;
}