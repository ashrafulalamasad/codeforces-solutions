#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> l(n+1), r(n+1), u(n+1), v(n+1);
        for(ll i = 1; i <= n; i++){
            cin >> l[i] >> r[i] >> u[i] >> v[i];
        }
        ll best = 0;
        for(ll m = 1; m <= n; m++){
            ll K = 0;
            for(ll i = 1; i <= n; i++){
                if(K == m) break;
                ll j = K + 1;
                bool leftBad = (j >= l[i] && j <= r[i]);
                if(leftBad) continue;
                ll rr = m - j + 1;
                bool rightBad = (rr >= u[i] && rr <= v[i]);
                if(rightBad) continue;
                K++;
            }
            if(K == m) best = max(best, m);
        }
        cout << best << endl;
    }
    return 0;
}
