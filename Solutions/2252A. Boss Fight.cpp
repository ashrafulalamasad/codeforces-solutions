#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin >> t; while(t--)
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        map<ll, ll> mp;
        ll sum = 0, mx = 0, val = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            mp[a[i]]++;
            if(mp[a[i]] > mx){
                mx = mp[a[i]];
                val = a[i];
            }
        }
        ll r = n - mx;
        if(r >= mx - 1){
            cout << sum << endl;
        }else{
            cout << sum - (mx - r - 2) * val << endl;
        }
    }
    return 0;
}
