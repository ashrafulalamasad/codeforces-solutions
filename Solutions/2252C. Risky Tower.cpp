#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

struct F{
    ll n, tb;
    vector<ll> c, s, f;
    F(ll sz){
        n = sz;
        c.assign(n + 1, 0);
        s.assign(n + 1, 0);
        f.assign(n + 1, 0);
        tb = 1;
        while((tb << 1) <= n) tb <<= 1;
    }
    void add(ll i, ll v){
        f[i]++;
        for(; i <= n; i += i & -i){
            c[i]++;
            s[i] += v;
        }
    }
    ll get(ll ts, ll cnt, ll nd, vector<ll>& vs){
        if(nd <= 0) return 0;
        if(ts < nd) return 2000000000000000000LL;
        ll b = ts - nd, i = 0, cs = 0, cc = 0;
        for(ll p = tb; p > 0; p >>= 1){
            ll nx = i + p;
            if(nx <= n && cs + s[nx] <= b){
                i = nx;
                cs += s[nx];
                cc += c[nx];
            }
        }
        ll d = cc;
        if(i < n){
            ll t = (b - cs) / vs[i];
            if(t > f[i + 1]) t = f[i + 1];
            d += t;
        }
        if(d > cnt) d = cnt;
        ll r = cnt - d;
        return r <= 0 ? 1 : r;
    }
};

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        if(m == 1){
            ll x;
            for(ll i = 0; i < n * 2; i++) cin >> x;
            cout << 1 << endl;
            continue;
        }
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        ll N = n * m;
        vector<ll> a(N);
        for(ll i = 0; i < N; i++) cin >> a[i];
        vector<ll> vals = a;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());
        for(ll i = 0; i < N; i++){
            a[i] = lower_bound(vals.begin(), vals.end(), a[i]) - vals.begin() + 1;
        }
        F fw(vals.size());
        ll ts = 0, cnt = 0, ans = m;
        for(ll i = n - 1; i >= 0; i--){
            for(ll j = 0; j < m; j++){
                ll id = a[i * m + j];
                ll val = vals[id - 1];
                fw.add(id, val);
                ts += val;
                cnt++;
            }
            ll got = fw.get(ts, cnt, v[i], vals);
            if(got < ans) ans = got;
            if(ans == 1) break;
        }
        cout << ans << endl;
    }
    return 0;
}
