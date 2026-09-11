#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m; cin >> n >> m;
        if(m <= n && (n - m) % 2 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
