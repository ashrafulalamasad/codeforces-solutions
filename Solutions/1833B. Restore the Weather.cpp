#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<pair<ll, ll>> a(n);
        vector<ll> b(n), ans(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i].first; a[i].second = i;
        }
        for(ll i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(ll i = 0; i < n; i++){
            ans[a[i].second] = b[i];
        }
        for(ll i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
