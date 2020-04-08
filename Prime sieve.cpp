#include<bits/stdc++.h>
#define ll long long
using namespace std;
void prime_sieve(ll *p){
    for(ll i=3;i<=1000006;i+=2){
        p[i]=1;
    }
    for(ll i=3;i<=1000006;i+=2){
        if(p[i]==1){
            for(ll j=i*i;j<=1000006;j=j+i){
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[1]=p[0]=0;
}
int main(){
    ll n;
    cin>>n;
    ll p[1000006]={0};
    prime_sieve(p);
    vector<ll>primes;
    for(ll i=0;i<=n;i++){
        if(p[i]==1){
            primes.push_back(i);
        }
    }
    for(auto i:primes){
        cout<<i<<" ";
    }
}