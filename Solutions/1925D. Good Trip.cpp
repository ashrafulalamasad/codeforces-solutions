#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k, sum = 0; cin >> n >> m >> k;
        for(ll i = 0; i < m; i++){
            ll a, b, f; cin >> a >> b >> f;
            sum = (sum + f) % 1000000007;
        }
        ll tot = n * (n - 1) / 2, mod = 1000000007;
        ll base = tot % mod, exp = mod - 2, invTot = 1;
        while(exp > 0){
            if(exp % 2 == 1) invTot = invTot * base % mod;
            base = base * base % mod; exp = exp / 2;
        }
        ll part1 = k % mod * invTot % mod * sum % mod;
        ll comb = k * (k - 1) / 2 % mod;
        ll part2 = m % mod * invTot % mod * invTot % mod * comb % mod;
        ll ans = (part1 + part2) % mod;
        cout << ans << endl;
    }
    return 0;
}
