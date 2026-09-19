#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll l, r; cin >> l >> r;
        if(l == 1 && r == 1) cout << 1 << endl;
        else cout << r - l << endl;
    }
    return 0;
}
