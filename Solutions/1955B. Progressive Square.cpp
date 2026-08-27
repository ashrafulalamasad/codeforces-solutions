#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, c, d; cin >> n >> c >> d;
        vector<ll> b(n*n); ll mn = LLONG_MAX;
        for(ll i = 0; i < n*n; i++){
            cin >> b[i];
            mn = min(mn, b[i]);
        }
        bool ok = true; map<ll,ll> cnt;
        for(ll i = 0; i < n*n; i++) cnt[b[i]]++;
        for(ll i = 0; i < n && ok; i++){
            for(ll j = 0; j < n; j++){
                ll val = mn + i*c + j*d;
                if(cnt[val] == 0){
                    ok = false;
                    break;
                }
                cnt[val]--;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
