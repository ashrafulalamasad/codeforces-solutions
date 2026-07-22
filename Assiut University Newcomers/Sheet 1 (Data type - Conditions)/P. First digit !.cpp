#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x; cin >> x;
    ll first = x / 1000;
    if(first % 2 == 0) cout << "EVEN" << endl;
    else cout << "ODD" << endl;
    return 0;
}
