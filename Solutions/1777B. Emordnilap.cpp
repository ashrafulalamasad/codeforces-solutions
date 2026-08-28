#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll MOD = 1000000007;
    vector<ll> fact(100001); fact[0] = 1;
    for(ll i = 1; i <= 100000; i++) fact[i] = fact[i - 1] * i % MOD;
    tc{
        ll n; cin >> n;
        cout << fact[n] * n % MOD * (n - 1) % MOD << endl;
    }
    return 0;
}
