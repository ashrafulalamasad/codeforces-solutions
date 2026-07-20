#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    ll n, k, sum_all = 0; cin >> n >> k; vector<ll> c(n);
    for(ll i = 0; i < n; i++){
        cin >> c[i];
        sum_all = sum_all + c[i];
    }
    vector<ll> is_cap(n, 0);
    vector<ll> caps(k);
    for(ll i = 0; i < k; i++){
        cin >> caps[i];
        caps[i] = caps[i] - 1;
        is_cap[caps[i]] = 1;
    }
    ll total_cost = 0;
    ll sum_capitals_processed = 0;
    for(ll i = 0; i < k; i++){
        ll u = caps[i];
        total_cost = total_cost + c[u] * (sum_all - c[u] - sum_capitals_processed);
        sum_capitals_processed = sum_capitals_processed + c[u];
    }
    for(ll i = 0; i < n; i++){
        ll v = (i + 1) % n;
        if(is_cap[i] == 0 && is_cap[v] == 0){
            total_cost = total_cost + c[i] * c[v];
        }
    }
    cout << total_cost << endl;
    return 0;
}
