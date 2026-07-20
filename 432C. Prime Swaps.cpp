#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n + 1), pos(n + 1);
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    vector<char> isPrime(n + 1, true);
    if(n >= 0) isPrime[0] = false;
    if(n >= 1) isPrime[1] = false;
    for(ll i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(ll j = i * i; j <= n; j += i) isPrime[j] = false;
        }
    }
    vector<ll> prevP(n + 1, 0);
    ll last = 0;
    for(ll i = 1; i <= n; i++){
        if(isPrime[i]) last = i;
        prevP[i] = last;
    }
    vector<pair<ll,ll>> ops;
    for(ll i = 1; i <= n; i++){
        while(pos[i] > i){
            ll p = pos[i];
            ll len = prevP[p - i + 1];
            ll l = p - len + 1;
            ll r = p;
            ops.emplace_back(l, r);
            ll x = a[l];
            ll y = a[r];
            swap(a[l], a[r]);
            pos[x] = r;
            pos[y] = l;
        }
    }
    cout << (ll)ops.size() << endl;
    for(auto &pr : ops) cout << pr.first << " " << pr.second << endl;
    return 0;
}
