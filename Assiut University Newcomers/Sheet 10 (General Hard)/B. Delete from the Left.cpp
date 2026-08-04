#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s, t; cin >> s >> t;
    ll i = s.size() - 1, j = t.size() - 1;
    ll cnt = 0;
    while(i >= 0 && j >= 0 && s[i] == t[j]){
        i--;
        j--;
        cnt++;
    }
    cout << s.size() + t.size() - 2 * cnt << endl;
    return 0;
}
