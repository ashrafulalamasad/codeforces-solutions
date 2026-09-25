#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ind = 1, ans = 0; cin >> n;
        vector<ll> p(n), comp(n, 0);
        for(ll i = 0; i < n; i++){
            cin >> p[i];
            p[i]--;
        }
        for(ll i = 0; i < n; i++){
            if(comp[i]) continue;
            ll v = i;
            while(comp[v] == 0){
                comp[v] = ind;
                v = p[v]; ans++;
            }
            ind++; ans--;
        }
        bool found = false;
        for(ll i = 0; i < n - 1; i++){
            if(comp[i] == comp[i + 1]){
                cout << ans - 1 << endl;
                found = true; break;
            }
        }
        if(!found) cout << ans + 1 << endl;
    }
    return 0;
}
