#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; string s; cin >> n >> s;
        vector<ll> first(26, -1);
        bool ok = true;
        for(ll i=0; i<n; i++){
            ll c = s[i] - 'a';
            if(first[c] == -1) first[c] = i % 2;
            else if(first[c] != i % 2) ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
