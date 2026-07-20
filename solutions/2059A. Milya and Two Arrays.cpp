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
        set<ll> sa(a.begin(), a.end());
        set<ll> sb(b.begin(), b.end());
        ll da = sa.size(), db = sb.size();
        if((da >= 3) || (db >= 3) || (da == 2 && db == 2)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
