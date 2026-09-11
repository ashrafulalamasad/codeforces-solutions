#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll prev = 501; cout << prev;
        for(ll i = 2; i <= n; i++){
            ll x; cin >> x;
            prev += x;
            cout << " " << prev;
        }
        cout << endl;
    }
    return 0;
}
