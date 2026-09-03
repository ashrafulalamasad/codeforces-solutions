#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k; vector<ll> a(n), b(m);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++) cin >> b[i];
        string s; cin >> s; ll inf = k + 1;
        sort(b.begin(), b.end()); ll p = 0;
        vector<ll> pos(k + 2, inf), neg(k + 2, inf);
        for(ll i = 1; i <= k; i++){
            p += (s[i - 1] == 'R' ? 1 : -1);
            if(p > 0 && pos[p] == inf) pos[p] = i;
            if(p < 0 && neg[-p] == inf) neg[-p] = i;
        }
        vector<ll> dead(k + 2, 0);
        for(ll i = 0; i < n; i++){
            ll it = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            ll death = inf;
            if(it > 0){
                ll dl = a[i] - b[it - 1];
                if(dl <= k) death = min(death, neg[dl]);
            }
            if(it < m){
                ll dr = b[it] - a[i];
                if(dr <= k) death = min(death, pos[dr]);
            }
            dead[death]++;
        }
        ll alive = n;
        for(ll i = 1; i <= k; i++){
            alive -= dead[i];
            cout << alive << " ";
        }
        cout << endl;
    }
    return 0;
}
