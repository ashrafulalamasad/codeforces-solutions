#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, cx = 0, cy = 0; cin >> n; vector<pair<ll,ll>> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
        sort(v.begin(), v.end());
        string path = ""; bool ok = true;
        for(ll i = 0; i < n; i++){
            ll tx = v[i].first, ty = v[i].second;
            if(tx < cx || ty < cy){
                ok = false;
                break;
            }
            path += string(tx - cx, 'R');
            path += string(ty - cy, 'U');
            cx = tx; cy = ty;
        }
        if(ok){
            cout << "YES" << endl;
            cout << path << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
