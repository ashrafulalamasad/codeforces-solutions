#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a, b; cin >> a >> b;
        if(a <= b) cout << -1 << endl; else cout << min(b, a - b) << endl;
    }
    return 0;
}
