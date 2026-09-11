#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        cout << n << endl;
        for(ll i = 0; i < n; i++) a[i] = i + 1;
        for(ll i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
        ll tmp = a[0]; a[0] = a[n - 1]; a[n - 1] = tmp;
        for(ll i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
        for(ll i = 1; i <= n - 2; i++){
            ll tmp2 = a[0]; a[0] = a[i]; a[i] = tmp2;
            for(ll j = 0; j < n; j++) cout << a[j] << " ";
            cout << endl;
        }
    }
    return 0;
}
