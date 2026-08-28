#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    cout << 3 * n + 4 << endl;
    for(ll i = 0; i <= n; i++){
        cout << i << " " << i << endl;
        cout << i << " " << i + 1 << endl;
        cout << i + 1 << " " << i << endl;
    }
    cout << n + 1 << " " << n + 1 << endl;
    return 0;
}
