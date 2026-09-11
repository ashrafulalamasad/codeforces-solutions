#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k, ans = 0; cin >> n >> k; vector<ll> r(n);
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            ans = ans + x / k;
            r[i] = x % k;
        }
        sort(r.begin(), r.end());
        ll l = 0, rr = n - 1;
        while(l < rr){
            if(r[l] + r[rr] >= k){
                ans++; l++; rr--;
            }else{
                l++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
