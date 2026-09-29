#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> rest, likely;
        for(ll i = 1; i < n; i++) rest.push_back(i);
        for(ll i = 1; i <= n; i++) likely.push_back(i);
        ll ans = 0, maxB = 0;
        while((1LL << maxB) <= n) maxB++;
        for(ll d = 0; d < maxB; d++){
            vector<ll> rest0, rest1, likely0, likely1;
            for(ll j = 0; j < (ll)rest.size(); j++){
                ll idx = rest[j];
                cout << "? " << idx << " " << (1LL << d) << endl;
                ll b; cin >> b;
                if(b < 0) return 0;
                if(b == 0) rest0.push_back(idx);
                else rest1.push_back(idx);
            }
            ll zeros = 0, ones = 0;
            for(ll j = 0; j < (ll)likely.size(); j++){
                ll v = likely[j];
                if((v & (1LL << d)) != 0){
                    ones++;
                    likely1.push_back(v);
                }else{
                    zeros++;
                    likely0.push_back(v);
                }
            }
            if(zeros == (ll)rest0.size()){
                ans = ans + (1LL << d);
                rest = rest1;
                likely = likely1;
            }else{
                rest = rest0;
                likely = likely0;
            }
        }
        cout << "! " << ans << endl;
    }
    return 0;
}
