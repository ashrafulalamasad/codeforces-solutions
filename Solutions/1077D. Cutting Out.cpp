#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<ll> s(n);
    for(ll i = 0; i < n; i++) cin >> s[i];
    map<ll, ll> cnt;
    for(ll i = 0; i < n; i++) cnt[s[i]]++;
    ll lo = 1, hi = n, best = 1;
    while(lo <= hi){
        ll mid = (lo + hi) / 2;
        ll total = 0;
        for(auto p : cnt) total += p.second / mid;
        if(total >= k){
            best = mid;
            lo = mid + 1;
        }else hi = mid - 1;
    }
    vector<ll> t;
    for(auto p : cnt){
        for(ll j = 0; j < p.second / best && t.size() < k; j++) t.push_back(p.first);
        if(t.size() == k) break;
    }
    for(ll i = 0; i < k; i++) cout << t[i] << " ";
    cout << endl;
    return 0;
}
