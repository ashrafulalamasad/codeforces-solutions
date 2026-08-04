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
    ll n, x; cin >> n >> x; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++){
        ll op; cin >> op;
        if(op == 2){
            cout << 0;
        }else{
            if(!isPrime(a[i])) cout << -1;
            else if(a[i] == 2) cout << 0;
            else cout << 5;
        }
        if(i < n - 1) cout << ' ';
    }
    cout << endl;
    return 0;
}
