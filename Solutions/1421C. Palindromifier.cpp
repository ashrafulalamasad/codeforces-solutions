#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll n = s.size();
    cout << 3 << endl;
    cout << "R " << n - 1 << endl;
    cout << "L " << n << endl;
    cout << "L " << 2 << endl;
    return 0;
}
