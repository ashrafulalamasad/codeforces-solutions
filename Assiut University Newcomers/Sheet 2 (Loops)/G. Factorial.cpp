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
        ll fact = 1;
        for(ll i = 2; i <= n; i++) fact *= i;
        cout << fact << endl;
    }
    return 0;
}
