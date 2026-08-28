#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll m; cin >> m; vector<ll> d(m);
        for(ll i = 0; i < m; i++) cin >> d[i];
        map<ll, ll> need, have;
        for(ll i = 0; i < m; i++) have[d[i]]++;
        for(ll i = 0; i < n; i++){
            if(a[i] != b[i]) need[b[i]]++;
        }
        bool ok = false;
        for(ll i = 0; i < n; i++){
            if(b[i] == d[m - 1]) ok = true;
        }
        for(auto& p : need){
            if(have[p.first] < p.second) ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
