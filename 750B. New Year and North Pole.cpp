#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, pos = 0; cin >> n;
    const ll SOUTH=20000;
    bool ok = 1;
    for(ll i=0; i<n; i++){
        ll t; string d; cin >> t >> d;
        if(!ok) continue;
        if(pos == 0 && d != "South") ok=0;
        if(pos == SOUTH && d != "North") ok=0;
        if(d == "South"){
            if(pos+t > SOUTH) ok=0;
            else pos += t;
        }else if(d == "North"){
            if(pos < t) ok=0;
            else pos -= t;
        }
    }
    if(pos != 0) ok = 0;
    cout << (ok? "YES" : "NO") << endl;
    return 0;
}
