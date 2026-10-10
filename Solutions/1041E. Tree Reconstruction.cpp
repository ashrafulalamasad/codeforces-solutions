#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, bad = 0; cin >> n;
    vector<ll> cnt(n + 1, 0);
    for(ll i = 0; i < n - 1; i++){
        ll x, y; cin >> x >> y;
        if(y != n) bad = 1;
        if(x >= 1 && x <= n) cnt[x]++;
    }
    if(bad == 1){
        cout << "NO" << endl;
        return 0;
    }
    ll cur = 0, last = -1;
    for(ll i = 1; i < n; i++){
        cur = cur + cnt[i];
        if(cur > i){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    set<ll> free;
    for(ll i = 1; i < n; i++) free.insert(i);
    for(ll i = 1; i < n; i++){
        if(cnt[i] > 0){
            free.erase(i);
            if(last != -1) cout << last << " " << i << endl;
            last = i;
            cnt[i]--;
        }
        while(cnt[i] > 0){
            ll v = *free.begin();
            cout << last << " " << v << endl;
            last = v;
            cnt[i]--;
            free.erase(free.begin());
        }
    }
    cout << last << " " << n << endl;
    return 0;
}
