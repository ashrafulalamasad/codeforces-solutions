#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, x; cin >> n >> x;
        if(n <= 2) cout << 1 << endl;
        else cout << 1 + (n + x - 3) / x << endl;
    }
    return 0;
}
