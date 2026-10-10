#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll r = n % 4;
    if(r == 0 || r == 3) cout << 0 << endl;
    else cout << 1 << endl;
    return 0;
}
