#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> h(n);
        for(ll i = 0; i < n; i++) cin >> h[i];
        ll ans = h[n - 1];
        for(ll i = n - 2; i >= 0; i--){
            ll cand = ans + 1;
            if(h[i] > cand) cand = h[i];
            ans = cand;
        }
        cout << ans << endl;
    }
    return 0;
}
