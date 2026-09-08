#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string s; cin >> s;
        for(ll i = 1; i <= 8; i++){
            if(i != s[1] - '0') cout << s[0] << i << endl;
        }
        for(char c = 'a'; c <= 'h'; c++){
            if(c != s[0]) cout << c << s[1] << endl;
        }
    }
    return 0;
}
