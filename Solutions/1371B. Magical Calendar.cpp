#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, r; cin >> n >> r;
        if(r < n) cout << r * (r + 1) / 2 << endl;
        else cout << n * (n - 1) / 2 + 1 << endl;
    }
    return 0;
}
