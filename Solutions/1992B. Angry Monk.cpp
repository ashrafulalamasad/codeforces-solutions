#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, mx = 0; cin >> n >> k; vector<ll> a(k);
        for(ll i = 0; i < k; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll answer = 2 * (n - mx) - k + 1;
        cout << answer << endl;
    }
    return 0;
}
