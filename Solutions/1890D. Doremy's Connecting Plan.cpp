#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, c; cin >> n >> c;
        ll cur; cin >> cur;
        vector<pair<ll, ll>> v(n - 1);
        for(ll i = 2; i <= n; i++){
            ll a; cin >> a;
            v[i - 2] = {c * i - a, a};
        }
        sort(v.begin(), v.end());
        bool ok = true;
        for(ll i = 0; i < n - 1; i++){
            if(cur < v[i].first){
                ok = false;
                break;
            }
            cur += v[i].second;
        }
        if(ok){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
