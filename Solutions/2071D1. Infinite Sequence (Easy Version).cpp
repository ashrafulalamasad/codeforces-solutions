#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, l, r; cin >> n >> l >> r;
        vector<ll> a(n + 1), pre(n + 1);
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            pre[i] = pre[i - 1] ^ a[i];
        }
        if(n % 2 == 0){
            a.push_back(pre[n / 2]);
            pre.push_back(pre.back() ^ a.back());
            n++;
            for(ll i = n + 1; i <= 2 * n; i++){
                a.push_back(pre[i / 2]);
                pre.push_back(pre.back() ^ a.back());
            }
        }else{
            for(ll i = n + 1; i <= 2 * n; i++){
                a.push_back(pre[i / 2]);
                pre.push_back(pre.back() ^ a.back());
            }
        }
        ll p = pre[n], sz = pre.size() - 1;
        auto get = [&](ll x) -> ll {
            ll ret = 0;
            while(true){
                if(x <= sz) return ret ^ a[x];
                ret ^= p;
                if((x / 2 - n) % 2 == 0) break;
                x /= 2;
            }
            return ret;
        };
        cout << get(l) << endl;
    }
    return 0;
}
