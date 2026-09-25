#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r, k; cin >> l >> r >> k;
        if(l == r) cout << (l > 1 ? "YES" : "NO") << endl;
        else cout << (k >= (r + 1) / 2 - l / 2 ? "YES" : "NO") << endl;
    }
    return 0;
}
