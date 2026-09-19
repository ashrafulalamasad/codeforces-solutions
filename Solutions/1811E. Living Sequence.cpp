#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k; cin >> k; vector<ll> d;
        while(k > 0){
            d.push_back(k % 9);
            k = k / 9;
        }
        ll ans = 0;
        for(ll i = (ll)d.size() - 1; i >= 0; i--){
            ll cur = d[i];
            if(cur >= 4){
                cur++;
            }
            ans = ans * 10 + cur;
        }
        cout << ans << endl;
    }
    return 0;
}
