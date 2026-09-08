#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll INF = 2e15;
ll sg[140010], lz[140010];
vector<ll> bs;

void build(ll node, ll l, ll r){
    lz[node] = 0;
    if(l == r){
        sg[node] = bs[l];
        return;
    }
    ll mid = (l + r) / 2;
    build(node * 2, l, mid);
    build(node * 2 + 1, mid + 1, r);
    sg[node] = min(sg[node * 2], sg[node * 2 + 1]);
}

void update(ll node, ll l, ll r, ll ql, ll qr, ll val){
    if(qr < l || r < ql) return;
    if(ql <= l && r <= qr){
        sg[node] += val;
        lz[node] += val;
        return;
    }
    ll mid = (l + r) / 2;
    update(node * 2, l, mid, ql, qr, val);
    update(node * 2 + 1, mid + 1, r, ql, qr, val);
    sg[node] = min(sg[node * 2], sg[node * 2 + 1]) + lz[node];
}

ll query(ll node, ll l, ll r, ll ql, ll qr){
    if(qr < l || r < ql) return INF * 2;
    if(ql <= l && r <= qr) return sg[node];
    ll mid = (l + r) / 2;
    return min(query(node * 2, l, mid, ql, qr), query(node * 2 + 1, mid + 1, r, ql, qr)) + lz[node];
}

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<ll> a(n + 1), prv(n + 1, 0), lst(n + 1, 0);
    for(ll i = 1; i <= n; i++){
        cin >> a[i];
        prv[i] = lst[a[i]];
        lst[a[i]] = i;
    }
    vector<ll> dp(n + 1, INF), ndp(n + 1, INF);
    dp[0] = 0;
    for(ll j = 1; j <= k; j++){
        bs = dp;
        build(1, 0, n);
        for(ll i = 1; i <= n; i++){
            if(prv[i] > 0) update(1, 0, n, 0, prv[i] - 1, i - prv[i]);
            ndp[i] = query(1, 0, n, 0, i - 1);
        }
        ndp[0] = INF;
        dp = ndp;
    }
    cout << dp[n] << endl;
    return 0;
}
