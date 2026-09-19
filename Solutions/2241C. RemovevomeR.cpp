#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, b = 1; string s; cin >> n >> s;
        for(ll i = 1; i < n; i++){
            if(s[i] != s[i - 1]) b++;
        }
        if(b == 2) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
