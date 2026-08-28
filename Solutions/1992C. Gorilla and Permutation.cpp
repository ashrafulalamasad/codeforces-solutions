#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        for(ll val = n; val >= k; val--) cout << val << " ";
        for(ll val = k - 1; val > m; val--) cout << val << " ";
        for(ll val = 1; val <= m; val++) cout << val << " ";
        cout << endl;
    }
    return 0;
}
