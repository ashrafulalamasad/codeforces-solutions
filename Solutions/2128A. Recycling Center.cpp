#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, c; cin >> n >> c; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll best = 0;
        for(ll f = 0; f <= n; f++){
            ll ok = 1;
            for(ll i = 0; i < f; i++){
                ll p = f - 1 - i;
                ll cur = a[i];
                for(ll j = 0; j < p; j++){
                    cur *= 2;
                    if(cur > c) break;
                }
                if(cur > c){
                    ok = 0;
                    break;
                }
            }
            if(ok == 1) best = f;
        }
        cout << n - best << endl;
    }
    return 0;
}
