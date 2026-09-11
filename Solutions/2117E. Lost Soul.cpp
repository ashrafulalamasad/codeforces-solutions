#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];
        vector<ll> seen(n + 1, 0); ll ans = 0;
        for(ll i = n - 1; i >= 0; i--){
            if(i + 2 < n){
                seen[a[i + 2]] = 1;
                seen[b[i + 2]] = 1;
            }
            if(a[i] == b[i] || seen[a[i]] || seen[b[i]]){
                ans = i + 1;
                break;
            }
            if(i + 1 < n){
                if(a[i] == a[i + 1] || b[i] == b[i + 1]){
                    ans = i + 1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
