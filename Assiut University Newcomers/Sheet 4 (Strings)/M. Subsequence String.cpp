#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    string target = "hello";
    ll j = 0;
    for(ll i = 0; i < (ll)s.size() && j < (ll)target.size(); i++){
        if(s[i] == target[j]) j++;
    }
    if(j == (ll)target.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
