#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; string s; cin >> n >> m >> s;
        vector<ll> p(n + 1, 0);
        for(ll i = 0; i < n; i++){
            p[i + 1] = p[i] + (s[i] == '+' ? 1 : -1);
        }
        vector<ll> prefMin(n + 1), prefMax(n + 1);
        vector<ll> sufMin(n + 2), sufMax(n + 2);
        prefMin[0] = prefMax[0] = 0;
        for(ll i = 1; i <= n; i++){
            prefMin[i] = min(prefMin[i - 1], p[i]);
            prefMax[i] = max(prefMax[i - 1], p[i]);
        }
        sufMin[n + 1] = sufMax[n + 1] = p[n];
        for(ll i = n; i >= 1; i--){
            sufMin[i] = min(sufMin[i + 1], p[i]);
            sufMax[i] = max(sufMax[i + 1], p[i]);
        }
        for(ll q = 0; q < m; q++){
            ll l, r; cin >> l >> r;
            ll mn1 = prefMin[l - 1], mx1 = prefMax[l - 1];
            ll shift = p[l - 1] - p[r];
            ll mn2 = shift + sufMin[r + 1], mx2 = shift + sufMax[r + 1];
            ll mn = min(mn1, mn2), mx = max(mx1, mx2);
            cout << mx - mn + 1 << endl;
        }
    }
    return 0;
}
