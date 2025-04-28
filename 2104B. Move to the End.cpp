#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<ll> a(n+1), pref(n+1), suf(n+2);
        for(ll i = 1; i <= n; i++) cin >> a[i];
        for(ll i = 1; i <= n; i++){
            if(i == 1) pref[i] = a[i];
            else pref[i] = max(pref[i-1], a[i]);
        }
        suf[n+1] = 0;
        for(ll i = n; i >= 1; i--){
            suf[i] = suf[i+1] + a[i];
        }
        for(ll k = 1; k <= n; k++){
            if(k == n){
                cout<<suf[1];
            }else{
                ll m = n - k;
                ll s_k = suf[n-k+1];
                ll s_k1 = suf[n-k+2];
                ll cand1 = pref[m] + s_k1;
                cout << max(cand1, s_k);
            }
            if(k < n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
