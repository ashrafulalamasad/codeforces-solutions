#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), cnt(n + 1, 0), idx(n + 1, -1);
        for(ll i = 0; i < n; i++){
            cin >> a[i]; cnt[a[i]]++; idx[a[i]] = i + 1;
        }
        ll ans = -1;
        for(ll v = 1; v <= n; v++){
            if(cnt[v] == 1){
                ans = idx[v]; break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
