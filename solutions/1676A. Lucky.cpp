#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s;
        cin >> s;
        ll first = 0, last = 0;
        for(ll i = 0; i < 3; i++){
            first += (s[i] - '0');
        }
        for(ll i = 3; i < 6; i++){
            last += (s[i] - '0');
        }
        cout << (first == last ? "YES\n" : "NO\n");
    }
    return 0;
}
