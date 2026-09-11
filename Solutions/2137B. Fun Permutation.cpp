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
        for(ll i = 0; i < n; i++){
            ll p; cin >> p;
            cout << n + 1 - p << " ";
        }
        cout << endl;
    }
    return 0;
}
