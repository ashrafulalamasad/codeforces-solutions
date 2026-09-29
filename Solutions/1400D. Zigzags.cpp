#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> cntLeft(n + 1, 0), cntRight(n + 1, 0);
        for(ll j = 0; j < n; j++){
            fill(cntRight.begin(), cntRight.end(), 0);
            for(ll k = n - 1; k > j; k--){
                ans += cntLeft[a[k]] * cntRight[a[j]];
                cntRight[a[k]]++;
            }
            cntLeft[a[j]]++;
        }
        cout << ans << endl;
    }
    return 0;
}
