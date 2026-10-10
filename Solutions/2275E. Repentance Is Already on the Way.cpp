#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        ll sumD1 = 0, sumD2 = 0, eqSn = 0;
        for(ll i = 0; i + 1 < n; i++){
            if(a[i + 1] == b[i]) sumD1++;
        }
        for(ll i = 0; i + 1 < n; i++){
            if(a[i] == b[i + 1]) sumD2++;
        }
        if(a[n - 1] == b[n - 1]) eqSn = 1;
        ll base = 2 * n - 1 + sumD1 + eqSn;
        ll suff = sumD2, pref = 0, best = suff;
        for(ll s = 2; s <= n; s++){
            if(a[s - 2] == b[s - 2]) pref++;
            if(a[s - 2] == b[s - 1]) suff--;
            if(pref + suff > best) best = pref + suff;
        }
        ll answer = base + best;
        cout << answer << endl;
    }
    return 0;
}
