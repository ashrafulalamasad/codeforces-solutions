#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll cur = 0, cnt = 0;
        set<ll> seen; seen.insert(0);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            cur ^= x;
            if(seen.find(cur) != seen.end()){
                cnt++;
                cur = 0;
                seen.clear();
                seen.insert(0);
            }else seen.insert(cur);
        }
        cout << n - cnt << endl;
    }
    return 0;
}
