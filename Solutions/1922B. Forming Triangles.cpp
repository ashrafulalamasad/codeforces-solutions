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
        sort(a.begin(), a.end());
        ll ans = 0, smaller = 0, i = 0;
        while(i < n){
            ll j = i;
            while(j < n && a[j] == a[i]) j++;
            ll cnt = j - i;
            ans += cnt * (cnt - 1) * (cnt - 2) / 6 + cnt * (cnt - 1) / 2 * smaller;
            smaller += cnt;
            i = j;
        }
        cout << ans << endl;
    }
    return 0;
}
