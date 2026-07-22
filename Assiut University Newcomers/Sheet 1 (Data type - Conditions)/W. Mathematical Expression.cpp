#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c, ans; char s, q; cin >> a >> s >> b >> q >> c;
    if(s == '+') ans = a + b;
    else if(s == '-') ans = a - b;
    else ans = a * b;
    if(ans == c) cout << "Yes" << endl;
    else cout << ans << endl;
    return 0;
}
