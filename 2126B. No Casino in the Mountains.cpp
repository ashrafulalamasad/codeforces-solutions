#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, ans = 0; cin >> n >> k;
        vector<ll> a(n), p(n+1);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            p[i+1] = p[i] + a[i];
        }
        for(ll i = 0; i <= n - k; ){
            if(p[i + k] - p[i] == 0){
                ans++;
                i += k + 1;
            }else{
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
