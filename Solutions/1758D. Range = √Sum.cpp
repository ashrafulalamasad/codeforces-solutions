#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0; cin >> n;
        ll R = 2 * n, target = R * R;
        ll low = target - R - (n - 2) * (2 * R - n + 1) / 2;
        ll L = (low + n - 1) / n;
        vector<ll> a(n, 0); a[0] = L;
        for(ll i = 1; i < n - 1; i++) a[i] = L + i;
        a[n - 1] = L + R;
        for(ll i = 0; i < n; i++) sum = sum + a[i];
        ll delta = target - sum;
        for(ll j = n - 2; j >= 1; j--){
            ll up = 0;
            if(j == n - 2) up = L + R - 1; else up = a[j + 1] - 1;
            ll add = up - a[j];
            if(add > delta) add = delta;
            a[j] = a[j] + add;
            delta = delta - add;
        }
        for(ll i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
