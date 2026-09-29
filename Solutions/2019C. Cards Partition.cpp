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
        ll total = 0, maximum = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            total += a[i];
            maximum = max(maximum, a[i]);
        }
        ll answer = 1;
        for(ll size = 1; size <= n; size++){
            ll minimum = max(0LL, size * maximum - total);
            ll purchase = (minimum + size - 1) / size * size - total % size;
            if(purchase < minimum) purchase += size;
            if(purchase <= k) answer = size;
        }
        cout << answer << endl;
    }
    return 0;
}
