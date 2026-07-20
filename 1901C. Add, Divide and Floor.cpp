#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; ++i) cin >> a[i];
        ll mn = *min_element(a.begin(), a.end());
        ll mx = *max_element(a.begin(), a.end());
        if(mn == mx){
            cout << 0 << endl;
            continue;
        }
        ll d = mx - mn;
        ll ops = 0;
        while(d > 0){
            d /= 2;
            ++ops;
        }
        cout << ops << endl;
        if(ops <= n){
            for(ll i = 0; i < ops; ++i) cout << mn << " ";
            cout << endl;
        }
    }
    return 0;
}
