#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n],b[n][n],c[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    int sum;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum=0;
            for(int k=0;k<n;k++){
                sum+=a[i][k]*b[k][j];// row of matrix a and col of matrix b does not changes
            }
            c[i][j]=sum;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
3
1 2 3     9 8 7
4 5 6  x  6 5 4  =
7 8 9     3 2 1

30 24 18 
84 69 54 
138 114 90 

*/