#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n), w(k);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < k; i++) cin >> w[i];
        sort(a.begin(), a.end());
        sort(w.begin(), w.end(), greater<ll>());
        ll c1 = 0, ans = 0, lo = 0;
        for(ll i = 0; i < k; i++){
            if(w[i] == 1) c1++;
        }
        for(ll i = 0; i < c1; i++) ans += 2 * a[n - 1 - i];
        for(ll i = 0; i < k - c1; i++) ans += a[n - 1 - c1 - i];
        for(ll i = 0; i < k - c1; i++){
            ans += a[lo];
            lo += w[i] - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
