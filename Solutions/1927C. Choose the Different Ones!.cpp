#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k; vector<ll> a(n), b(m);
        bool ina[1000001] = {0}, inb[1000001] = {0};
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] <= k) ina[a[i]] = true;
        }
        for(ll i = 0; i < m; i++){
            cin >> b[i];
            if(b[i] <= k) inb[b[i]] = true;
        }
        ll only_a = 0, only_b = 0;
        bool ok = true;
        for(ll x = 1; x <= k; x++){
            if(!ina[x] && !inb[x]) ok = false;
            else if(ina[x] && !inb[x]) only_a++;
            else if(!ina[x] && inb[x]) only_b++;
        }
        if(ok && only_a <= k / 2 && only_b <= k / 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
