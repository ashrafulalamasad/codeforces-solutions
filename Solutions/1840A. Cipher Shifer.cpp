#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s, res; cin >> n >> s;
        for(ll i = 0; i < n; i++){
            res += s[i];
            ll j = i + 1;
            while(j < n && s[j] != s[i]) j++;
            i = j;
        }
        cout << res << endl;
    }
    return 0;
}
