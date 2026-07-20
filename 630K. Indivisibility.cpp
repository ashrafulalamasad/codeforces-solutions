#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    const ll P = 210;
    vector<int> good(P+1, 0);
    for(ll i=1; i<=P; i++){
        if (__gcd(i, P) == 1) good[i] = 1;
    }
    ll full = n / P;
    ll rem = n % P;
    ll ans = full * 48LL;
    for(ll i=1; i<=rem; i++) if (good[i]) ans++;
    cout << ans << endl;
    return 0;
}
