#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; string s; cin >> n >> s;
    ll ones = 0, zeros = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == 'n') ones++;
        if(s[i] == 'z') zeros++;
    }
    for(ll i = 0; i < ones; i++) cout << 1 << " ";
    for(ll i = 0; i < zeros; i++) cout << 0 << " ";
    cout << endl;
    return 0;
}
