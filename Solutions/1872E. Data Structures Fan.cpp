#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n + 1), pre(n + 1, 0);
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
            pre[i] = pre[i - 1] ^ a[i];
        }
        string s; cin >> s;
        ll total = pre[n], cur = 0;
        for(ll i = 1; i <= n; i++){
            if(s[i - 1] == '1'){
                cur ^= a[i];
            }
        }
        ll q; cin >> q;
        while(q--){
            ll type; cin >> type;
            if(type == 1){
                ll l, r; cin >> l >> r;
                cur ^= pre[r] ^ pre[l - 1];
            }else{
                ll g; cin >> g;
                cout << (g == 1 ? cur : total ^ cur) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
