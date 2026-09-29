#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll countGood(ll n, vector<ll>& pref){
    if(n <= 0) return 0;
    return n / 210 * 48 + pref[n % 210];
}

int main()
{
    fast;
    vector<ll> pref(210);
    for(ll i = 1; i < 210; i++) pref[i] = pref[i - 1] + (gcd(i, 210LL) == 1);
    tc{
        ll l, r; cin >> l >> r;
        cout << countGood(r, pref) - countGood(l - 1, pref) << endl;
    }
    return 0;
}
