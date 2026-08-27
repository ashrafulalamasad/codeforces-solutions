#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, sum = 0, ans = 0; cin >> n;
    set<ll> seen; seen.insert(0);
    for(ll i = 0; i < n; i++){
        ll x; cin >> x; sum += x;
        if(seen.count(sum)){
            ans++;
            seen.clear();
            seen.insert(0);
            sum = x;
        }
        seen.insert(sum);
    }
    cout << ans << endl;
    return 0;
}
