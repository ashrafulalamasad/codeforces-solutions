#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, s = 1; cin >> n;
        while(s <= n) s *= 2;
        vector<ll> g(s), ans;
        for(ll i = 0; i < s; i++){
            g[i] = i ^ (i >> 1);
        }
        ll k = 2 * s - 1;
        ans.reserve(k);
        for(ll i = 0; i < s - 1; i++){
            ans.push_back(g[i] ^ g[i + 1]);
        }
        ans.push_back(g[s - 1] ^ g[0]);
        for(ll i = 0; i < s - 1; i++){
            ans.push_back(g[i] ^ g[i + 1]);
        }
        cout << k << endl;
        for(ll i = 0; i < k; i++){
            if(i > 0) cout << ' ';
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
