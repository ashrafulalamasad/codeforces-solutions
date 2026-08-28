#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MOD = 998244353;

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 1; i < n; i++) cin >> a[i];
        ll ways = 1, ans = 0;
        for(ll k = 1; k < n; k++){
            ans = ans * k % MOD;
            if(a[k] == 0) ans = (ans + ways) % MOD;
            cout << ans << " ";
            ways = ways * (a[k] == 0 ? k : k - 1) % MOD;
        }
        cout << endl;
    }
    return 0;
}
