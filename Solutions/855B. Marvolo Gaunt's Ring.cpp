#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, p, q, r; cin >> n >> p >> q >> r;
    ll bestP = LLONG_MIN, bestPQ = LLONG_MIN, ans = LLONG_MIN;
    for(ll i = 0; i < n; i++){
        ll a; cin >> a;
        bestP = max(bestP, p * a);
        bestPQ = max(bestPQ, bestP + q * a);
        ans = max(ans, bestPQ + r * a);
    }
    cout << ans << endl;
    return 0;
}
