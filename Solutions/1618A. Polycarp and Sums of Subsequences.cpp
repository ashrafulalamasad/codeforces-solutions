#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        vector<ll> b(7);
        for(ll i = 0; i < 7; i++) cin >> b[i];
        cout << b[0] << " " << b[1] << " " << b[6] - b[0] - b[1] << endl;
    }
    return 0;
}
