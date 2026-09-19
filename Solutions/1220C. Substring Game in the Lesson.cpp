#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string s; cin >> s;
    ll n = s.size();
    ll mn = s[0];
    for(ll i = 0; i < n; i++){
        if(s[i] > mn) cout << "Ann" << endl;
        else cout << "Mike" << endl;
        if(s[i] < mn) mn = s[i];
    }
    return 0;
}
