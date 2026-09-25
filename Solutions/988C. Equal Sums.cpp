#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k; cin >> k;
    map<ll, pair<ll, ll>> mp; bool found = false;
    ll ai = 0, ax = 0, bj = 0, by = 0;
    for(ll i = 1; i <= k && !found; i++){
        ll m, sum = 0; cin >> m; vector<ll> a(m);
        for(ll j = 0; j < m; j++){
            cin >> a[j]; sum += a[j];
        }
        for(ll j = 0; j < m && !found; j++){
            ll v = sum - a[j];
            if(mp.count(v)){
                if(mp[v].first != i){
                    ai = mp[v].first;
                    ax = mp[v].second;
                    bj = i; by = j + 1;
                    found = true;
                }
            }else{
                mp[v] = make_pair(i, j + 1);
            }
        }
    }
    if(!found) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << ai << " " << ax << endl;
        cout << bj << " " << by << endl;
    }
    return 0;
}
