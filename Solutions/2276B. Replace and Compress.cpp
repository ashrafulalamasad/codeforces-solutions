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
        ll n = s.size();
        ll plus = 0, minus = 0;
        for(ll i = 1; i < n - 1; i++){
            if(s[i - 1] == s[i] && s[i] == s[i + 1]) plus = 1;
            if(s[i - 1] == s[i + 1] && s[i] != s[i - 1]) minus = 1;
        }
        cout << 1 + plus + minus << endl;
    }
    return 0;
}
