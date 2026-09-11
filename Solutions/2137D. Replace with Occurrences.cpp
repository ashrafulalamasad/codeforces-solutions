#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, bad = 0, cur = 1; cin >> n;
        vector<ll> a(n), b(n), cnt(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> b[i];
        for(ll i = 0; i < n; i++) cnt[b[i]]++;
        for(ll v = 1; v <= n; v++){
            if(cnt[v] % v != 0) bad = 1;
        }
        if(bad == 1){
            cout << -1 << endl;
        }else{
            vector<vector<ll>> pos(n + 1);
            for(ll i = 0; i < n; i++){
                pos[b[i]].push_back(i);
            }
            for(ll v = 1; v <= n; v++){
                for(ll i = 0; i < cnt[v]; i = i + v){
                    for(ll j = 0; j < v; j++){
                        a[pos[v][i + j]] = cur;
                    }
                    cur++;
                }
            }
            for(ll i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
