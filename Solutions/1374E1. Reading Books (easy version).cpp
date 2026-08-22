#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k;
    vector<ll> both, alice, bob;
    for(ll i = 0; i < n; i++){
        ll t, a, b; cin >> t >> a >> b;
        if(a == 1 && b == 1){
            both.push_back(t);
        }else if(a == 1){
            alice.push_back(t);
        }else if(b == 1){
            bob.push_back(t);
        }
    }
    sort(both.begin(), both.end());
    sort(alice.begin(), alice.end());
    sort(bob.begin(), bob.end());
    auto prefix = [&](vector<ll>& v) -> vector<ll> {
        vector<ll> p(v.size() + 1, 0);
        for(ll i = 0; i < (ll)v.size(); i++){
            p[i + 1] = p[i] + v[i];
        }
        return p;
    };
    vector<ll> prefBoth = prefix(both);
    vector<ll> prefAlice = prefix(alice);
    vector<ll> prefBob = prefix(bob);
    const ll INF = 1000000000000000000LL;
    ll ans = INF;
    for(ll x = 0; x <= k; x++){
        ll need = k - x;
        if(x <= (ll)both.size() && need <= (ll)alice.size() && need <= (ll)bob.size()){
            ll cost = prefBoth[x] + prefAlice[need] + prefBob[need];
            if(cost < ans){
                ans = cost;
            }
        }
    }
    if(ans == INF){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}
