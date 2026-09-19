#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll INFLL = (ll)4000000000000000000LL;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> c(n, INFLL), a(k);
        for(ll i = 0; i < k; i++){
            cin >> a[i];
            a[i]--;
        }
        for(ll i = 0; i < k; i++){
            ll t; cin >> t;
            c[a[i]] = min(c[a[i]], t);
        }
        vector<ll> L(n, INFLL);
        ll p = INFLL;
        for(ll i = 0; i < n; i++){
            if(p != INFLL) p++;
            p = min(p, c[i]);
            L[i] = p;
        }
        vector<ll> R(n, INFLL);
        p = INFLL;
        for(ll i = n - 1; i >= 0; i--){
            if(p != INFLL) p++;
            p = min(p, c[i]);
            R[i] = p;
        }
        for(ll i = 0; i < n; i++) cout << min(L[i], R[i]) << " ";
        cout << endl;
    }
    return 0;
}
