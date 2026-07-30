#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool isPrime(ll n){
    if(n < 2) return false;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main()
{
    fast;
    ll n; cin >> n;
    if(isPrime(n)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
