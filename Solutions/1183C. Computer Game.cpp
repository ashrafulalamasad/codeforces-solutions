#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll k, n, a, b; cin >> k >> n >> a >> b;
        if(k <= n * b) cout << -1 << endl; else{
            ll rem = k - n * b;
            ll x = (rem - 1) / (a - b);
            if(x > n) x = n;
            cout << x << endl;
        }
    }
    return 0;
}
