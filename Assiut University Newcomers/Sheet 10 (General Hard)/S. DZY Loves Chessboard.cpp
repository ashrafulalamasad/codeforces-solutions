#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < n; i++){
        string s; cin >> s;
        for(ll j = 0; j < m; j++){
            if(s[j] == '-') cout << '-';
            else cout << ((i + j) % 2 == 0 ? 'B' : 'W');
        }
        cout << endl;
    }
    return 0;
}
