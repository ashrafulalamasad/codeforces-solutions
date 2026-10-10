#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), odd;
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll i = 0,base = 0, pairs = 0;
        while(i < n){
            ll j = i + 1;
            while(j < n && a[j] == a[i]) j++;
            ll c = j - i;
            base = base + a[i] * (c / 2);
            pairs = pairs + c / 2;
            if(c % 2 == 1) odd.push_back(a[i]);
            i = j;
        }
        ll ans = 0;
        if(pairs >= 2) ans = 2 * base;
        ll m = odd.size();
        for(ll k = 0; k < m; k++){
            if(2 * base > odd[k]) ans = max(ans, 2 * base + odd[k]);
        }
        for(ll k = 1; k < m; k++){
            if(odd[k - 1] + 2 * base > odd[k]){
                ans = max(ans, odd[k - 1] + 2 * base + odd[k]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
