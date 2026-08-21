#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, q; cin >> n >> q;
    const ll BLOCK = 1000;
    vector<ll> a(n);
    vector<vector<ll>> blk((n + BLOCK - 1) / BLOCK);
    for(ll i = 0; i < n; i++){
        a[i] = i + 1;
        blk[i / BLOCK].push_back(a[i]);
    }
    ll inv = 0;
    auto count_range = [&](ll l, ll r, ll low, ll high) -> ll {
        if(l > r || low > high){
            return 0;
        }
        ll bl = l / BLOCK;
        ll br = r / BLOCK;
        ll res = 0;
        if(bl == br){
            for(ll i = l; i <= r; i++){
                if(a[i] >= low && a[i] <= high){
                    res++;
                }
            }
            return res;
        }
        ll leftEnd = min(n - 1, (bl + 1) * BLOCK - 1);
        for(ll i = l; i <= leftEnd; i++){
            if(a[i] >= low && a[i] <= high){
                res++;
            }
        }
        ll rightStart = br * BLOCK;
        for(ll i = rightStart; i <= r; i++){
            if(a[i] >= low && a[i] <= high){
                res++;
            }
        }
        for(ll b = bl + 1; b < br; b++){
            const vector<ll>& v = blk[b];
            res += lower_bound(v.begin(), v.end(), high + 1) - lower_bound(v.begin(), v.end(), low);
        }
        return res;
    };
    auto erase_val = [&](ll b, ll val){
        auto it = lower_bound(blk[b].begin(), blk[b].end(), val);
        if(it != blk[b].end() && *it == val){
            blk[b].erase(it);
        }
    };
    auto insert_val = [&](ll b, ll val){
        auto it = lower_bound(blk[b].begin(), blk[b].end(), val);
        blk[b].insert(it, val);
    };
    while(q--){
        ll l, r; cin >> l >> r;
        l--;
        r--;
        if(l == r){
            cout << inv << endl;
            continue;
        }
        if(l > r){
            swap(l, r);
        }
        ll x = a[l];
        ll y = a[r];
        ll k = 0;
        if(x < y){
            k = count_range(l + 1, r - 1, x + 1, y - 1);
            inv += 1 + 2 * k;
        }else{
            k = count_range(l + 1, r - 1, y + 1, x - 1);
            inv -= 1 + 2 * k;
        }
        ll b1 = l / BLOCK;
        ll b2 = r / BLOCK;
        if(b1 != b2){
            erase_val(b1, x);
            insert_val(b1, y);
            erase_val(b2, y);
            insert_val(b2, x);
        }
        swap(a[l], a[r]);
        cout << inv << endl;
    }
    return 0;
}
