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
        ll sum = 0, mx = 0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }
        if(mx * 2 > sum || sum % 2 == 1) cout << "T" << endl;
        else cout << "HL" << endl;
    }
    return 0;
}
