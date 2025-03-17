#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, total = 0; cin >> n >> m;
        vector<ll> a(m), X(m), Y(m);
        for(ll i = 0; i < m; i++){
            cin >> a[i];
            X[i] = min(a[i], n-1);
            Y[i] = max((ll)1, n - a[i]);
        }
        vector<ll> sortedY = Y;
        sort(sortedY.begin(), sortedY.end());
        vector<ll> prefix(m);
        prefix[0] = sortedY[0];
        for(ll i = 1; i < m; i++){
            prefix[i] = prefix[i-1] + sortedY[i];
        }
        for(ll i = 0; i < m; i++){
            ll x = X[i];
            ll p = upper_bound(sortedY.begin(), sortedY.end(), x) - sortedY.begin();
            if(p > 0) total += (ll)p * (x + 1) - prefix[p-1];
        }
        ll diag = 0;
        for(ll i = 0; i < m; i++){
            if(X[i] >= Y[i]) diag += (X[i] - Y[i] + 1);
        }
        cout << total - diag << endl;
    }
    return 0;
}
