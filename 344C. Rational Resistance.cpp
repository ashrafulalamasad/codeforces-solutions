#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b; cin >> a >> b;
    ll ans = 0;
    while(b > 0){
        ans += a / b;
        a %= b;
        swap(a, b);
    }
    cout << ans << endl;
    return 0;
}
