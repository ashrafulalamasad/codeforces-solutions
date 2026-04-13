#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc {
        ll n; cin >> n; vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<ll>());
        bool ok = true;
        for(ll i = 1; i < n; i++) if(a[i] == a[i-1]) { ok = false; break; }
        if(!ok) { cout << -1 << "\n"; continue; }
        for(ll i = 0; i < n; i++) cout << a[i] << " \n"[i==n-1];
    }
    return 0;
}
