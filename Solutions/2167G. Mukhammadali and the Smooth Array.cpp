#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), c(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll total = 0;
        for(ll i = 0; i < n; i++){
            cin >> c[i];
            total += c[i];
        }
        vector<ll> dp(n);
        ll bestKeep = 0;
        for(ll i = 0; i < n; i++){
            ll bestPrev = 0;
            for(ll j = 0; j < i; j++){
                if(a[j] <= a[i]){
                    bestPrev = max(bestPrev, dp[j]);
                }
            }
            dp[i] = bestPrev + c[i];
            bestKeep = max(bestKeep, dp[i]);
        }
        cout << total - bestKeep << endl;
    }
    return 0;
}
