#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(i+j==n-1){//stoping point should be sum of both the indexes = size of array
                sum+=a[i][j];
            }
        }
    }
    cout<<sum;
}