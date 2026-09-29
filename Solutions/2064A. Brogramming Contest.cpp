#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; string s; cin >> s;
        ll answer = s[0] == '1';
        for(ll i = 1; i < n; i++) if(s[i] != s[i - 1]) answer++;
        cout << answer << endl;
    }
    return 0;
}
