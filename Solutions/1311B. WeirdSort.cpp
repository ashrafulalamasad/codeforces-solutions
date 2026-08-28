#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m; vector<ll> a(n), ok(n, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < m; i++){
            ll p; cin >> p; ok[p - 1] = 1;
        }
        for(ll it = 0; it < n; it++){
            for(ll i = 0; i + 1 < n; i++){
                if(ok[i] && a[i] > a[i + 1]) swap(a[i], a[i + 1]);
            }
        }
        ll sorted = 1;
        for(ll i = 0; i + 1 < n; i++){
            if(a[i] > a[i + 1]) sorted = 0;
        }
        if(sorted) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
