#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    const ll N = 100000;
    vector<bool> comp(N + 1, false);
    vector<ll> primes;
    for(ll i = 2; i <= N; i++){
        if(!comp[i]){
            primes.push_back(i);
            for(ll j = i * i; j <= N; j += i) comp[j] = true;
        }
    }
    ll pcnt = primes.size();
    tc{
        ll n; cin >> n; vector<ll> p(n + 1, 0); vector<bool> used(n + 1, false);
        p[1] = 1;
        used[1] = true;
        for(ll i = 0; i < pcnt && primes[i] <= n; i++){
            if(primes[i] * 2 > n){
                p[primes[i]] = primes[i];
                used[primes[i]] = true;
            }
        }
        ll hi = upper_bound(primes.begin(), primes.end(), n / 2) - primes.begin();
        for(ll i = hi - 1; i >= 0; i--){
            ll q = primes[i];
            if(q == 2) break;
            vector<ll> grp;
            for(ll m = q; m <= n; m += q){
                if(!used[m]) grp.push_back(m);
            }
            ll sz = grp.size();
            for(ll j = 0; j < sz; j++){
                p[grp[j]] = grp[(j + 1) % sz];
                used[grp[j]] = true;
            }
        }
        vector<ll> rest;
        for(ll v = 2; v <= n; v++){
            if(!used[v]) rest.push_back(v);
        }
        ll sz = rest.size();
        if(sz > 1){
            for(ll j = 0; j < sz; j++) p[rest[j]] = rest[(j + 1) % sz];
        }else if(sz == 1){
            p[rest[0]] = rest[0];
        }
        for(ll i = 1; i <= n; i++) cout << p[i] << " ";
        cout << endl;
    }
    return 0;
}
