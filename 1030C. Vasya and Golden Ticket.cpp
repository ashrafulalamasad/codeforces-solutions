#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s; cin >> n >> s;
    vector<ll> a(n), pref(n + 1, 0);
    for(ll i = 0; i < n; i++){
        a[i] = s[i] - '0';
        pref[i + 1] = pref[i] + a[i];
    }
    for(ll k = 2; k <= n; k++){
        if(pref[n] % k == 0){
            ll target = pref[n] / k;
            ll cur = 0, ok = 1;
            for(ll i = 0; i < n; i++){
                cur += a[i];
                if(cur == target) cur = 0;
                else if(cur > target){
                    ok = 0;
                    break;
                }
            }
            if(ok && cur == 0){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
