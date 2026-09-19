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
        for(ll i = 0; i < n; i++) cin >> a[i];
        vector<ll> b = a; bool ok = true;
        sort(b.begin(), b.end());
        for(ll i = 0; i < n; i++) if(a[i] % 2 != b[i] % 2) ok = false;
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
