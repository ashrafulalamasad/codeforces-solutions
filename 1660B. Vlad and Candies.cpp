#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> a(n);
        for(auto &x : a) cin >> x;
        sort(a.rbegin(), a.rend());
        if(n == 1 && a[0] > 1) cout << "NO\n";
        else if(n > 1 && a[0] > a[1] + 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
