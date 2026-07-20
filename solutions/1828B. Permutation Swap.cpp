#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        ll g = 0;
        for(ll i = 0; i < n; i++){
            g = __gcd(g, abs(p[i] - (i + 1)));
        }
        cout << g << endl;
    }
    return 0;
}
