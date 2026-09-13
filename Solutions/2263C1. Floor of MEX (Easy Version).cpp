#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), diff(n + 1, 0);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll k = 1; k <= n; k++){
            ll ak = a[k - 1];
            if(ak * k < n){
                ll l = ak * k;
                ll r = min(n - 1, l + k - 1);
                diff[l]++; diff[r + 1]--;
            }
        }
        vector<ll> b; ll cur = 0;
        for(ll i = 0; i < n; i++){
            cur = cur + diff[i];
            if(cur == 0) b.push_back(i);
        }
        cout << b.size() << endl;
        for(ll i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
