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
        ll pre = 1, suf = 1;
        while(pre < n && a[pre] == a[0]) pre++;
        while(suf < n && a[n - 1 - suf] == a[n - 1]) suf++;
        ll ans;
        if(a[0] == a[n - 1]){
            ans = max(0LL, n - pre - suf);
        }else{
            ans = min(n - pre, n - suf);
        }
        cout << ans << endl;
    }
    return 0;
}
