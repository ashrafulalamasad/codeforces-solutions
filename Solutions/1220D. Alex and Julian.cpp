#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> b(n);
    for(ll i = 0; i < n; i++) cin >> b[i];
    vector<ll> cnt(61, 0);
    for(ll i = 0; i < n; i++) cnt[__builtin_ctzll(b[i])]++;
    ll best = 0;
    for(ll i = 1; i < 61; i++) if(cnt[i] > cnt[best]) best = i;
    vector<ll> rem;
    for(ll i = 0; i < n; i++){
        if(__builtin_ctzll(b[i]) != best) rem.push_back(b[i]);
    }
    cout << rem.size() << endl;
    for(ll i = 0; i < rem.size(); i++) cout << rem[i] << " ";
    if(rem.size() > 0) cout << endl;
    return 0;
}
