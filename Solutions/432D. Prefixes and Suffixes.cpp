#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s; ll n = s.size();
    vector<ll> pi(n,0);
    for(ll i = 1; i < n; i++){
        ll j = pi[i - 1];
        while(j > 0 && s[i] != s[j]) j = pi[j - 1];
        if(s[i] == s[j]) j++;
        pi[i] = j;
    }
    vector<ll> cnt(n + 1,0);
    for(ll i = 1; i <= n; i++) cnt[i] = 1;
    for(ll i = n; i >= 2; i--){
        ll p = pi[i - 1];
        if(p > 0) cnt[p] += cnt[i];
    }
    vector<pair<ll,ll>> res;
    ll k = n;
    while(k > 0){
        res.emplace_back(k,cnt[k]);
        k = pi[k - 1];
    }
    reverse(res.begin(), res.end());
    cout << (ll)res.size() << endl;
    for(auto &pr : res) cout << pr.first << " " << pr.second << endl;
    return 0;
}
