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
        sort(a.begin(), a.end(), greater<ll>());
        ll sum = 0;
        for(ll i = 0; i + 1 < n; i = i + 2) sum = sum + a[i] - a[i + 1];
        ll last = 0;
        if(n % 2 == 1) last = a[n - 1];
        ll ans = last;
        if(sum > k) ans = ans + sum - k;
        cout << ans << endl;
    }
    return 0;
}
