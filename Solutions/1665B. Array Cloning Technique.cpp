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
        ll mx = 1, cur = 1;
        for(ll i = 1; i < n; i++){
            if(a[i] == a[i - 1]) cur = cur + 1;
            else cur = 1;
            if(cur > mx) mx = cur;
        }
        ll ans = 0;
        while(mx < n){
            ans = ans + 1;
            ans = ans + min(mx, n - mx);
            mx = mx * 2;
        }
        cout << ans << endl;
    }
    return 0;
}
