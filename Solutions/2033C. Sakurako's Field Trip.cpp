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
        for(ll i = n / 2 - 1; i >= 0; i--){
            ll j = n - i - 1;
            ll current = a[i] == a[i + 1];
            ll swapped = a[j] == a[i + 1];
            if(i + 1 != j){
                current += a[j - 1] == a[j];
                swapped += a[j - 1] == a[i];
            }
            ans += min(current, swapped);
            if(swapped < current) swap(a[i], a[j]);
        }
        cout << ans << endl;
    }
    return 0;
}
