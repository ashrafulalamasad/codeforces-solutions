#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a1, b1, a2, b2; cin >> a1 >> b1 >> a2 >> b2;
        ll side1 = max(a1, b1), side2 = max(a2, b2);
        ll other1 = min(a1, b1), other2 = min(a2, b2);
        if(side1 == side2 && other1 + other2 == side1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
