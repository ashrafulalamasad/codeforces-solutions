#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    string s, p; cin >> s >> p;
    ll n = (ll)s.size();
    ll m = (ll)p.size();
    if(m > n){
        cout << 0 << endl;
        return 0;
    }
    vector<ll> need(26,0), have(26,0);
    for(char c: p) need[c - 'a']++;
    ll qmarks = 0;
    for(ll i=0; i<m; i++){
        if(s[i] == '?') qmarks++;
        else have[s[i]-'a']++;
    }
    ll ans = 0;
    for(ll i=0; i+ m <= n; i++){
        bool ok = true;
        for(int c=0; c<26; c++){
            if(have[c] > need[c]){ ok = false; break; }
        }
        if(ok) ans++;
        if(i + m == n) break;
        if(s[i] == '?') qmarks--; else have[s[i]-'a']--;
        if(s[i+m] == '?') qmarks++; else have[s[i+m]-'a']++;
    }
    cout << ans << endl;
    return 0;
}
