#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll mn = *min_element(a.begin(), a.end());
    ll mx = *max_element(a.begin(), a.end());
    if(mn == mx){
        cout << 0 << endl;
        return 0;
    }
    ll diff = mx - mn;
    if(diff % 2 != 0){
        for(ll x : a){
            if(x != mn && x != mx){
                cout << -1 << endl;
                return 0;
            }
        }
        cout << diff << endl;
    }else{
        ll mid = mn + diff / 2;
        for(ll x : a){
            if(x != mn && x != mid && x != mx){
                cout << -1 << endl;
                return 0;
            }
        }
        cout << diff / 2 << endl;
    }
    return 0;
}
