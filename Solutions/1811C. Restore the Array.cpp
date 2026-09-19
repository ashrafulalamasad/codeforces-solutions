#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n), b(n - 1);
        for(ll i = 0; i < n - 1; i++) cin >> b[i];
        a[0] = b[0]; a[n - 1] = b[n - 2];
        for(ll i = 1; i < n - 1; i++){
            a[i] = min(b[i - 1], b[i]);
        }
        for(ll i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
