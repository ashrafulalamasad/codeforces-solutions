#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
    set<ll> colors = {s1, s2, s3, s4};
    cout << 4 - colors.size() << endl;
    return 0;
}
