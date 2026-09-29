#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    unordered_map<ll, ll> cnt;
    cnt.reserve(n * 2);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    ll remove = 0;
    for(ll x : a){
        ll good = 0;
        for(ll power = 1; power <= (1LL << 31); power <<= 1){
            ll y = power - x;
            if(cnt[y] - (y == x) > 0) good = 1;
        }
        if(!good) remove++;
    }
    cout << remove << endl;
    return 0;
}
