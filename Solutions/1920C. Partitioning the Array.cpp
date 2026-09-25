#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll k = 1; k <= n; k++){
            if(n % k == 0){
                ll g = 0;
                for(ll i = 0; i + k < n; i++) g = gcd(g, abs(a[i + k] - a[i]));
                if(g != 1) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
