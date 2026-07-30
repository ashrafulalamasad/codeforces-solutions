#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string a, b; cin >> a >> b;
    if(a == b) cout << -1 << endl;
    else cout << max(a.size(), b.size()) << endl;
    return 0;
}
