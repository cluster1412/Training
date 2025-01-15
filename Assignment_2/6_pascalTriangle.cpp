/*
Pascal's triangle for n = 5

         1
       1   1
      1  2  1
    1  3   3  1
  1  4   6   4  1
*/

/*  method 1
#include<iostream>
using namespace std;

int pow(int a,int b){
    int p=1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;
}

int main(){
    for(int i=0;i<5;i++){
        cout<<pow(11,i)<<"\n";
    }
    return 0;
}
*/

#include<iostream>
using namespace std;

int main(){
    int row[5][5];
    for(int i=0;i<5;i++){
        row[i][0]=1;
        row[i][i]=1;
        for(int j=1;j<i;j++){  // calculating middle numbers
            row[i][j] = row[i-1][j] + row[i-1][j-1];
        }
    }
    for(int i=0;i<5;i++){  //printing the pascal's triangle
        for(int j=0;j<(5-i);j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<row[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
