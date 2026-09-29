#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), prefix(n), suffix(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        prefix[0] = max(0LL, a[0]);
        for(ll i = 1; i < n; i++) prefix[i] = prefix[i - 1] + max(0LL, a[i]);
        suffix[n - 1] = max(0LL, -a[n - 1]);
        for(ll i = n - 2; i >= 0; i--) suffix[i] = suffix[i + 1] + max(0LL, -a[i]);
        ll answer = 0;
        for(ll i = 0; i < n; i++) answer = max(answer, prefix[i] + suffix[i]);
        cout << answer << endl;
    }
    return 0;
}
