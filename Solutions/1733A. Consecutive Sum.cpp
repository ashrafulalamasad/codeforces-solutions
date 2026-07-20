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
        ll sum = 0;
        for(ll i = 0; i < k; i++){
            ll mx = 0;
            for(ll j = i; j < n; j += k){
                mx = max(mx, a[j]);
            }
            sum += mx;
        }
        cout << sum << endl;
    }
    return 0;
}
