#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s; vector<ll> cnt(26, 0);
        for(ll i = 0; i < n; i++) cnt[s[i] - 'a']++;
        vector<pair<ll, ll>> a(26); string ans = "";
        for(ll i = 0; i < 26; i++) a[i] = {cnt[i], i};
        sort(a.begin(), a.end(), greater<pair<ll, ll>>());
        while(a[0].first > a[1].first){
            ans += char('a' + a[0].second);
            a[0].first--;
        }
        queue<pair<ll, ll>> q;
        for(ll i = 0; i < 26; i++) q.push(a[i]);
        while(!q.empty()){
            pair<ll, ll> p = q.front(); q.pop();
            if(p.first == 0) continue;
            ans += char('a' + p.second);
            p.first--; q.push(p);
        }
        cout << ans << endl;
    }
    return 0;
}
