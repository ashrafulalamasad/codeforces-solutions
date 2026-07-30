#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x; cin >> n >> x;
    ll packs = x, distress = 0;
    for(ll i = 0; i < n; i++){
        char op; ll d; cin >> op >> d;
        if(op == '+') packs += d;
        else if(packs >= d) packs -= d;
        else distress++;
    }
    cout << packs << " " << distress << endl;
    return 0;
}
