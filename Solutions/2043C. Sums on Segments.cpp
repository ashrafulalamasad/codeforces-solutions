#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), res;
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll l1 = 0, r1 = 0, pr = 0, mnl = 0, mxl = 0;
        ll l2 = 2000000000, r2 = -2000000000;
        ll mnr = 2000000000, mxr = -2000000000;
        for(ll i = 0; i < n; i++){
            pr = pr + a[i];
            if(a[i] != 1 && a[i] != -1){
                mnr = mnl; mxr = mxl;
                mnl = pr; mxl = pr;
            }
            if(pr - mxl < l1) l1 = pr - mxl;
            if(pr - mnl > r1) r1 = pr - mnl;
            if(pr - mxr < l2) l2 = pr - mxr;
            if(pr - mnr > r2) r2 = pr - mnr;
            if(pr < mnl) mnl = pr;
            if(pr > mxl) mxl = pr;
        }
        if(l2 > r1){
            for(ll v = l1; v <= r1; v++) res.push_back(v);
            for(ll v = l2; v <= r2; v++) res.push_back(v);
        }else if(r2 < l1){
            for(ll v = l2; v <= r2; v++) res.push_back(v);
            for(ll v = l1; v <= r1; v++) res.push_back(v);
        }else{
            ll L = l1;
            if(l2 < L) L = l2;
            ll R = r1;
            if(r2 > R) R = r2;
            for(ll v = L; v <= R; v++) res.push_back(v);
        }
        ll sz = res.size();
        cout << sz << endl;
        for(ll i = 0; i < (ll)res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
