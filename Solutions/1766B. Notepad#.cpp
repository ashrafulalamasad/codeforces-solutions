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
        bool seen[26][26] = {}, possible = false;
        for(ll i = 0; i + 1 < n; i++){
            if(i >= 2) seen[s[i - 2] - 'a'][s[i - 1] - 'a'] = true;
            if(seen[s[i] - 'a'][s[i + 1] - 'a']) possible = true;
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
