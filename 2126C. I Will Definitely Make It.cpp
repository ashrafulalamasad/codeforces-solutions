#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> h(n);
        for(ll i = 0; i < n; i++) cin >> h[i];
        ll hk = h[k-1];
        ll Hmax = *max_element(h.begin(), h.end());
        if(hk == Hmax){
            cout << "YES\n";
            continue;
        }
        sort(h.begin(), h.end());
        h.erase(unique(h.begin(), h.end()), h.end());
        ll pos = lower_bound(h.begin(), h.end(), hk) - h.begin();
        bool ok = true;
        for(ll i = pos; i+1 < (ll)h.size(); i++){
            if(h[i+1] - h[i] > hk){
                ok = false;
                break;
            }
        }
        ok ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
