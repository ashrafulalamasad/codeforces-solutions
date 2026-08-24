#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        bool sorted = true;
        for(ll i = 0; i < n - 1; i++){
            if(a[i] > a[i + 1]){
                sorted = false;
            }
        }
        if(!sorted){
            cout << 0 << endl;
            continue;
        }
        ll ans = LLONG_MAX;
        for(ll i = 0; i < n - 1; i++){
            ll diff = a[i + 1] - a[i];
            ans = min(ans, diff / 2 + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
