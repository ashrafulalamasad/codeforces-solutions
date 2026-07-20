#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; ll k; cin >> s >> k;
    ll n = (ll)s.size();
    ll N = n + k;
    ll best = 0;
    for(ll len = N/2; len >= 1; len--){
        bool found = false;
        for(ll st = 0; st + 2*len <= N; st++){
            bool ok = true;
            for(ll t = 0; t < len; t++){
                ll p = st + t;
                ll q = st + len + t;
                if(p < n && q < n){
                    if(s[(size_t)p] != s[(size_t)q]){ ok = false; break; }
                }
            }
            if(ok){ found = true; break; }
        }
        if(found){ best = 2*len; break; }
    }
    cout << best << endl;
    return 0;
}
