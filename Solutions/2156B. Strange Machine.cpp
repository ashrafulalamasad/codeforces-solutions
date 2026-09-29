#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; string s; cin >> n >> q >> s;
        vector<ll> a(q); ll cntB = 0;
        for(ll i = 0; i < q; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) if(s[i] == 'B') cntB++;
        if(cntB == 0) for(ll i = 0; i < q; i++) cout << a[i] << endl;
        else{
            for(ll i = 0; i < q; i++){
                ll cur = a[i];
                ll ans = 0;
                while(cur > 0){
                    for(ll j = 0; j < n && cur > 0; j++){
                        ans++;
                        if(s[j] == 'A') cur = cur - 1;
                        else cur = cur / 2;
                    }
                }
                cout << ans << endl;
            }
        }
    }
    return 0;
}
