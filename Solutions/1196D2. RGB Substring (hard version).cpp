#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; string s; cin >> n >> k >> s;
        string pat = "RGB"; ll ans = k;
        for(ll p = 0; p < 3; p++){
            vector<ll> pref(n + 1, 0);
            for(ll i = 0; i < n; i++){
                ll bad = 0;
                if(s[i] != pat[(i + p) % 3]) bad = 1;
                pref[i + 1] = pref[i] + bad;
            }
            for(ll l = 0; l + k <= n; l++){
                ll cur = pref[l + k] - pref[l];
                if(cur < ans) ans = cur;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
