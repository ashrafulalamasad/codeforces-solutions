#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> dp(6, 0);
        for(ll i = 0; i < n; i++){
            ll v; cin >> v; vector<ll> a(6, n + 1);
            for(ll c = 0; c < 6; c++){
                for(ll p = 0; p < 6; p++){
                    if(c != p && c + p != 5){
                        a[c] = min(a[c], dp[p] + (c + 1 != v));
                    }
                }
            }
            dp = a;
        }
        cout << *min_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}
