#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; if (!(cin >> n >> m)) return 0; vector<ll> a(n);
    for(ll i = 0; i < n; ++i) cin >> a[i];
    vector<ll> cnt(m+1, 0);
    for(ll x : a) if (1 <= x && x <= m) ++cnt[x];
    ll t = n / m, need_changes = 0;
    queue<ll> need;
    for(ll j = 1; j <= m; ++j) if(cnt[j] < t) need.push(j);
    for(ll i = 0; i < n && !need.empty(); ++i){
        if(1 <= a[i] && a[i] <= m){
            if(cnt[a[i]] > t){
                ll to = need.front();
                need.pop();
                --cnt[a[i]];
                ++cnt[to];
                a[i] = to;
                ++need_changes;
                if (cnt[to] < t) need.push(to);
            }
        }else{
            ll to = need.front();
            need.pop();
            ++cnt[to];
            a[i] = to;
            ++need_changes;
            if (cnt[to] < t) need.push(to);
        }
    }
    cout << t << " " << need_changes << endl;
    for(ll i = 0; i < n; ++i){
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
