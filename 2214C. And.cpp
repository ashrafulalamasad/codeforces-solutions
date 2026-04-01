#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll a[3];
        for(ll i = 0; i < 3; i++) cin >> a[i];
        sort(a, a + 3);
        cout << (a[0] ^ a[1] ^ a[2]) - a[1] << endl;
    }
    return 0;
}
