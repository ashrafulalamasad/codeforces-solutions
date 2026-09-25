#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> b = a;
        sort(b.begin(), b.end());
        map<ll, ll> pos;
        for(ll i = 0; i < n; i++) pos[b[i]] = i;
        ll breaks = 0;
        for(ll i = 0; i + 1 < n; i++) if(pos[a[i]] + 1 != pos[a[i + 1]]) breaks++;
        if(breaks + 1 <= k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
