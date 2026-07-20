#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll MOD = 1e9+7;

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll ans = 1;
        for(ll i = n - 1, j = n - 1; i >= 0; i--){
            while(j >= 0 && a[j] > b[i]) j--;
            ll cnt = n-1 - j;
            ll cur = cnt - (n-1-i);
            if(cur <= 0){ ans = 0; break; }
            ans = ans * cur % MOD;
        }
        cout << ans << endl;
    }
    return 0;
}
