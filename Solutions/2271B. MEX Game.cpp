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
        vector<ll> count(n + 1);
        for(ll i = 0; i < n; i++){
            ll value; cin >> value;
            count[value]++;
        }
        ll mex = 0;
        while(count[mex] >= 2 * k) mex++;
        cout << (count[mex] == 2 * k - 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
