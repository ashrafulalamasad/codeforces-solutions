#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(2 * n), l, r;
        for(ll i = 0; i < 2 * n; i++) cin >> a[i];
        map<ll, ll> cntL, cntR;
        for(ll i = 0; i < n; i++) cntL[a[i]]++;
        for(ll i = n; i < 2 * n; i++) cntR[a[i]]++;
        for(ll val = 1; val <= n; val++){
            if(cntL[val] >= 2 && cntR[val] >= 2){
                ll pairsL = cntL[val] / 2;
                ll pairsR = cntR[val] / 2;
                ll take = min(pairsL, pairsR);
                take = min(take, k);
                while(take-- && l.size() + 2 <= 2 * k){
                    l.push_back(val); l.push_back(val);
                    r.push_back(val); r.push_back(val);
                }
            }
        }
        for(ll val = 1; val <= n; val++){
            while(cntL[val] >= 2 && l.size() < 2 * k){
                l.push_back(val); l.push_back(val);
                cntL[val] -= 2;
            }
        }
        for(ll val = 1; val <= n; val++){
            while(cntR[val] >= 2 && r.size() < 2 * k){
                r.push_back(val); r.push_back(val);
                cntR[val] -= 2;
            }
        }
        for(ll val = 1; val <= n; val++){
            while(cntL[val] >= 1 && cntR[val] >= 1 && l.size() < 2 * k && r.size() < 2 * k){
                l.push_back(val); cntL[val]--;
                r.push_back(val); cntR[val]--;
            }
        }
        for(ll x : l) cout << x << " ";
        cout << endl;
        for(ll x : r) cout << x << " ";
        cout << endl;
    }
    return 0;
}
