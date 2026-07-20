#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll>a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll>h(n);
        for(ll i = 0; i < n; i++) cin >> h[i];
        ll ans = 0, sum = 0, l = 0;
        for(ll r = 0; r < n; r++){
            if(r && h[r-1] % h[r]){
                l = r;
                sum = 0;
            }
            sum += a[r];
            while(sum > k){
                sum -= a[l];
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        cout << ans << endl;
    }
    return 0;
}
