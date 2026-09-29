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
        set<char> seen;
        ll answer = 0;
        for(ll i = 0; i < n; i++){
            if(seen.insert(s[i]).second) answer += n - i;
        }
        cout << answer << endl;
    }
    return 0;
}
