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
        if(k >= 31) cout << n + 1 << endl;
        else cout << min(n, (1LL << k) - 1) + 1 << endl;
    }
    return 0;
}
