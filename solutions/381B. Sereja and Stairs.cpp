#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll m, mx = 0; cin >> m; vector<ll> cnt(5001,0);
    for(ll i=0; i<m; i++){
        ll x; cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }
    vector<ll> seq;
    for(ll v=1; v<=mx; v++){
        if(cnt[v] >= 1){
            seq.push_back(v);
            cnt[v]--;
        }
    }
    for(ll v=mx-1; v>=1; v--){
        if(cnt[v] >= 1){
            seq.push_back(v);
        }
    }
    cout << seq.size() << endl;
    for(ll x:seq) cout << x << " ";
    cout << endl;
    return 0;
}
