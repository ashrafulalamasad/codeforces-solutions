#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    if(n % 2 == 0) cout << 4 << " " << n-4;
    else cout << 9 << " " << n-9;
    return 0;
}
