#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<pair<ll, ll>> ops;
        bool hasPos = false, hasNeg = false;
        for(ll i = 0; i < n; i++){
            if(a[i] > 0) hasPos = true;
            if(a[i] < 0) hasNeg = true;
        }
        if(hasPos && hasNeg){
            ll mx = 0;
            for(ll i = 0; i < n; i++){
                if(a[i] > a[mx]) mx = i;
            }
            while(a[mx] < 20){
                a[mx] += a[mx];
                ops.push_back({mx + 1, mx + 1});
            }
            for(ll i = 0; i < n; i++){
                if(a[i] < 0){
                    a[i] += a[mx];
                    ops.push_back({i + 1, mx + 1});
                }
            }
            for(ll i = 1; i < n; i++){
                if(a[i] < a[i - 1]){
                    a[i] += a[i - 1];
                    ops.push_back({i + 1, i});
                }
            }
        }else if(hasPos){
            for(ll i = 1; i < n; i++){
                if(a[i] < a[i - 1]){
                    a[i] += a[i - 1];
                    ops.push_back({i + 1, i});
                }
            }
        }else if(hasNeg){
            for(ll i = n - 2; i >= 0; i--){
                if(a[i] > a[i + 1]){
                    a[i] += a[i + 1];
                    ops.push_back({i + 1, i + 2});
                }
            }
        }
        cout << ops.size() << endl;
        for(auto& [x, y] : ops) cout << x << " " << y << endl;
    }
    return 0;
}
