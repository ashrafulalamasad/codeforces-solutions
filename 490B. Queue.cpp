#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, a, b;
    const ll N = 1000000;
    map<ll,ll> ady;
    vector<ll> v(2 * N + 5, -1);
    ll x = N + 1;
    cin >> n;
    for(ll i = 0; i < n; ++i){
        cin >> a >> b;
        if (b != 0) { ady[x] = b; v[b] = x; }
        if (a != 0) { ady[a] = x; v[x] = a; }
        ++x;
    }
    vector<ll> roots;
    for(auto it = ady.begin(); it != ady.end(); ++it)
        if(v[it->first] == -1) roots.push_back(it->first);
    vector<ll> results;
    queue<ll> q;
    for(ll r : roots) q.push(r);
    while(!q.empty()){
        ll cur = q.front(); q.pop();
        if(cur <= N) results.push_back(cur);
        if(ady[cur]) q.push(ady[cur]);
    }
    for(ll i = 0; i < results.size(); ++i)
        cout << results[i] << (i + 1 < (ll)results.size() ? " " : "\n");
    return 0;
}
