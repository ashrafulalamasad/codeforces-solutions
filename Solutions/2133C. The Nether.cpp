#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        map<ll, vector<ll>> layers;
        ll big = -1; vector<ll> path;
        for(ll i = 1; i <= n; i++){
            cout << "? " << i << " " << n;
            for(ll j = 1; j <= n; j++) cout << " " << j;
            cout << endl;
            ll ans; cin >> ans;
            layers[ans].push_back(i);
            if(ans > big){
                big = ans;
                path.clear();
                path.push_back(i);
            }
        }
        for(ll depth = big - 1; depth >= 1; depth--){
            for(ll cand : layers[depth]){
                cout << "? " << path.back() << " 2 " << path.back() << " " << cand << endl;
                ll ans; cin >> ans;
                if(ans == 2){
                    path.push_back(cand);
                    break;
                }
            }
        }
        cout << "! " << (ll)path.size();
        for(ll v : path) cout << " " << v;
        cout << endl;
    }
    return 0;
}
