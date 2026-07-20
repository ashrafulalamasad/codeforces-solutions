#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, i = 0; cin >> n; vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        ll ans = *max_element(a.begin(),a.end());
        while(i < n){
            ll j = i;
            while(j+1 < n && (a[j]%2 + 2)%2 != (a[j+1]%2 + 2)%2 ) j++;
            if(j >= i){
                ll cur = 0;
                for(ll k=i; k<=j; k++){
                    cur = max(a[k], cur + a[k]);
                    ans = max(ans, cur);
                }
            }
            i = j+1;
        }
        cout << ans << endl;
    }
    return 0;
}
