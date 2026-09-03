#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, k; cin >> n >> k; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll mn = *min_element(a.begin(), a.end());
    ll mx = *max_element(a.begin(), a.end());
    if(mx - mn > k){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for(ll i = 0; i < n; i++){
        ll extra = a[i] - mn;
        for(ll j = 1; j <= a[i]; j++){
            if(j > 1) cout << " ";
            cout << (j <= extra ? j : 1);
        }
        cout << endl;
    }
    return 0;
}
