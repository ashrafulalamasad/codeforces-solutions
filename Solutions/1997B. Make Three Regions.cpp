#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<string> s(2);
        for(ll i = 0; i < 2; i++) cin >> s[i];
        ll ans = 0;
        for(ll c = 1; c + 1 < n; c++){
            if(s[0][c] == '.' && s[1][c] == '.' && s[0][c - 1] == '.' && s[0][c + 1] == '.' && s[1][c - 1] == 'x' && s[1][c + 1] == 'x') ans++;
            if(s[1][c] == '.' && s[0][c] == '.' && s[1][c - 1] == '.' && s[1][c + 1] == '.' && s[0][c - 1] == 'x' && s[0][c + 1] == 'x') ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
