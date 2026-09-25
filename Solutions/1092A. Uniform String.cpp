#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        string ans = "";
        for(ll i = 0; i < n; i++){
            ans += (char)('a' + i % k);
        }
        cout << ans << endl;
    }
    return 0;
}
