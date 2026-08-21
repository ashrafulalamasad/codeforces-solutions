#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, maxVal = 0; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > maxVal){
            maxVal = a[i];
        }
    }
    auto update = [&](vector<ll>& bit, ll N, ll idx, ll val){
        while(idx <= N){
            if(val > bit[idx]){
                bit[idx] = val;
            }
            idx += idx & -idx;
        }
    };
    auto query = [&](vector<ll>& bit, ll idx) -> ll {
        ll res = 0;
        while(idx > 0){
            if(bit[idx] > res){
                res = bit[idx];
            }
            idx -= idx & -idx;
        }
        return res;
    };
    vector<ll> f(n), g(n);
    vector<ll> bit(maxVal + 2, 0);
    ll L = 0;
    for(ll i = 0; i < n; i++){
        f[i] = query(bit, a[i] - 1) + 1;
        update(bit, maxVal, a[i], f[i]);
        if(f[i] > L){
            L = f[i];
        }
    }
    fill(bit.begin(), bit.end(), 0);
    for(ll i = n - 1; i >= 0; i--){
        ll key = maxVal - a[i] + 1;
        g[i] = query(bit, key - 1) + 1;
        update(bit, maxVal, key, g[i]);
    }
    vector<ll> cnt(L + 1, 0);
    for(ll i = 0; i < n; i++){
        if(f[i] + g[i] - 1 == L){
            cnt[f[i]]++;
        }
    }
    string ans;
    ans.reserve(n);
    for(ll i = 0; i < n; i++){
        if(f[i] + g[i] - 1 != L){
            ans += '1';
        }else if(cnt[f[i]] == 1){
            ans += '3';
        }else{
            ans += '2';
        }
    }
    cout << ans << endl;
    return 0;
}
