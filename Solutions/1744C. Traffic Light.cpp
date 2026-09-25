#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; char c; cin >> n >> c;
        string s; cin >> s;
        if(c == 'g') cout << 0 << endl;
        else{
            string doubled = s + s;
            ll ans = 0;
            ll nxt = -1;
            for(ll i = 2 * n - 1; i >= 0; i--){
                if(doubled[i] == 'g') nxt = i;
                if(i < n && doubled[i] == c && nxt != -1) ans = max(ans, nxt - i);
            }
            cout << ans << endl;
        }
    }
    return 0;
}
