#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int i,j,sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    //row
    for( i=0;i<n;i++){
        sum=0;
        for( j=0;j<n;j++){
            sum+=a[i][j];
        }
        cout<<sum<<endl;
    }
    // column
    for( i=0;i<n;i++){
        sum=0;
        for( j=0;j<n;j++){
            sum+=a[j][i];
        }
        cout<<sum<<endl;
    }
    
}