#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, c = -1, small = 0, big = 3; cin >> n;
    vector<ll> eu(n - 1), ev(n - 1), deg(n + 1, 0);
    for(ll i = 0; i < n - 1; i++){
        cin >> eu[i] >> ev[i];
        deg[eu[i]]++;
        deg[ev[i]]++;
    }
    for(ll v = 1; v <= n; v++){
        if(deg[v] >= 3){
            c = v;
            break;
        }
    }
    if(c == -1){
        for(ll i = 0; i < n - 1; i++) cout << i << endl;
        return 0;
    }
    vector<ll> lab(n - 1);
    for(ll i = 0; i < n - 1; i++){
        if((eu[i] == c || ev[i] == c) && small < 3) lab[i] = small++;
        else lab[i] = big++;
    }
    for(ll i = 0; i < n - 1; i++) cout << lab[i] << endl;
    return 0;
}
