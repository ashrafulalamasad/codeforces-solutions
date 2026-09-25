#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<ll> f(n), b(m);
    for(ll i = 0; i < n; i++) cin >> f[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    vector<ll> cnt(n + 1, 0), pos(n + 1, -1);
    for(ll i = 0; i < n; i++){
        cnt[f[i]]++;
        pos[f[i]] = i + 1;
    }
    for(ll i = 0; i < m; i++){
        if(cnt[b[i]] == 0){
            cout << "Impossible" << endl;
            return 0;
        }
    }
    for(ll i = 0; i < m; i++){
        if(cnt[b[i]] > 1){
            cout << "Ambiguity" << endl;
            return 0;
        }
    }
    cout << "Possible" << endl;
    for(ll i = 0; i < m; i++){
        if(i > 0) cout << " ";
        cout << pos[b[i]];
    }
    cout << endl;
    return 0;
}
