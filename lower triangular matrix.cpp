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
    int islower=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>i and a[i][j]!=0){
                islower=0;
            }
        }
    }
    if(islower){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}