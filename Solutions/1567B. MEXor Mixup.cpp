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
        ll m = a - 1, x = 0;
        if(m % 4 == 0) x = m;
        else if(m % 4 == 1) x = 1;
        else if(m % 4 == 2) x = m + 1;
        else x = 0;
        if(x == b) cout << a << endl;
        else if((x ^ b) != a) cout << a + 1 << endl;
        else cout << a + 2 << endl;
    }
    return 0;
}
