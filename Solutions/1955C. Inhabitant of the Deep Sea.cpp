#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ll L = (k + 1) / 2, R = k / 2, p = 0, Lrem = L;
        while(p < n && a[p] <= Lrem){
            Lrem -= a[p];
            p++;
        }
        ll q = 0, Rrem = R;
        while(q < n - p && a[n-1-q] <= Rrem){
            Rrem -= a[n-1-q];
            q++;
        }
        ll ans;
        if(p + q >= n) ans = n;
        else if(p + q == n - 1){
            if(Lrem + Rrem >= a[p]) ans = n;
            else ans = n - 1;
        }
        else ans = p + q;
        cout << ans << endl;
    }
    return 0;
}
