#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i] - i;
        }
        ll p = 1;
        for(ll day = 0; day < k; day++){
            ll j = upper_bound(b.begin(), b.end(), p) - b.begin();
            p += j;
        }
        cout << p << endl;
    }
    return 0;
}
