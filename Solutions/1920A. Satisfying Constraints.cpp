#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> neq;
        ll l = 1, r = 1e9, s = 0;
        for(ll i = 0; i < n; i++){
            ll a, x; cin >> a >> x;
            if(a == 1) l = max(l, x);
            else if(a == 2) r = min(r, x);
            else neq.push_back(x);
        }
        for(ll x : neq){
            if(x >= l && x <= r) s++;
        }
        cout << max(r - l + 1 - s, 0LL) << endl;
    }
    return 0;
}
