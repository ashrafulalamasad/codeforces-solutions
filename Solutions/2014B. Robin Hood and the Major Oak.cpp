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
        ll l = n - k + 1;
        ll odds = (n + 1) / 2 - l / 2;
        if(odds % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
