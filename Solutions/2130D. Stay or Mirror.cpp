#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++){
            ll left = 0, right = 0;
            for(ll j = 0; j < i; j++) if(p[j] > p[i]) left++;
            for(ll j = i + 1; j < n; j++) if(p[j] > p[i]) right++;
            ans += min(left, right);
        }
        cout << ans << endl;
    }
    return 0;
}
