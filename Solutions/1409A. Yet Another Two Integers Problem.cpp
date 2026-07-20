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
        ll mx = max(a, b), mn = min(a, b);
        cout << (((mx-mn)+9) / 10) << endl;
    }
    return 0;
}
