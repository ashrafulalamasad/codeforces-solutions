#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            sum += x;
        }
        cout << (sum + n - 1) / n << endl;
    }
    return 0;
}
