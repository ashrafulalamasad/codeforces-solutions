#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;tc{
        ll n; cin >> n; vector<string> s(n);
        for(ll i = 0; i < n; i++) cin >> s[i];
        vector<ll> cntFirst(26,0),cntSecond(26,0);
        map<string,ll> cntExact;
        for(ll i = 0; i < n; i++){
            cntFirst[s[i][0]-'a']++;
            cntSecond[s[i][1]-'a']++;
            cntExact[s[i]]++;
        }
        ll ans=0;
        for(ll i = 0; i < 26; i++) ans += cntFirst[i] * (cntFirst[i] - 1) / 2;
        for(ll i = 0; i < 26; i++) ans += cntSecond[i] * (cntSecond[i] - 1) / 2;
        for(auto &p:cntExact) ans -= p.second * (p.second - 1);
        cout << ans << endl;
    }
    return 0;
}
