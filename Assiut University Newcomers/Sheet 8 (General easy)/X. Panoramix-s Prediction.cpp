#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool is_prime(ll x){
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    for(ll i = n + 1; ; i++){
        if(is_prime(i)){
            if(i == m) cout << "YES" << endl;
            else cout << "NO" << endl;
            break;
        }
    }
    return 0;
}
