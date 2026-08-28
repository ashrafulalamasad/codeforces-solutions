#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; string s; cin >> n >> m >> s; vector<ll> a(m);
        for(ll i = 0; i < m; i++) cin >> a[i];
        string c; cin >> c; sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        sort(c.begin(), c.end());
        for(ll i = 0; i < (ll)a.size(); i++) s[a[i] - 1] = c[i];
        cout << s << endl;
    }
    return 0;
}
