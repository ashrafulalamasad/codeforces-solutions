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
        vector<ll> count1(30, 0);
        for(ll i = 0; i < n; i++){
            for(ll b = 0; b < 30; b++){
                if(a[i] & (1LL << b)) count1[b]++;
            }
        }
        ll ans = 0;
        for(ll k = 0; k < n; k++){
            ll sum = 0;
            for(ll b = 0; b < 30; b++){
                if(a[k] & (1LL << b)){
                    sum += (n - count1[b]) * (1LL << b);
                }else{
                    sum += count1[b] * (1LL << b);
                }
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}
