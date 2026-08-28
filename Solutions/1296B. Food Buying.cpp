#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll s; cin >> s; ll ans = 0;
        while(s >= 10){
            ll tens = s / 10;
            ans += tens * 10;
            s = tens + s % 10;
        }
        ans += s;
        cout << ans << endl;
    }
    return 0;
}
