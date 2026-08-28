#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll u, v; cin >> u >> v;
    if(u > v || (v - u) % 2 == 1){
        cout << -1 << endl;
        return 0;
    }
    if(u == v){
        if(u == 0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
            cout << u << endl;
        }
        return 0;
    }
    ll d = (v - u) / 2;
    if((((u + d) ^ d) == u)){
        cout << 2 << endl;
        cout << u + d << " " << d << endl;
    }else{
        cout << 3 << endl;
        cout << u << " " << d << " " << d << endl;
    }
    return 0;
}
