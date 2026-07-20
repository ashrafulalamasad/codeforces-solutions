#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, x; cin >> n;
    ll c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for(ll i=0; i<n; i++){
        cin >> x;
        if(x==1) c1++;
        else if(x==2) c2++;
        else if(x==3) c3++;
        else c4++;
    }
    ll taxis = c4;
    taxis += c3;
    c1 = max(0LL, c1 - c3);
    taxis += c2/2; c2 %= 2;
    if(c2){
        taxis++;
        c1 = max(0LL, c1-2);
    }
    taxis += (c1+3)/4;
    cout << taxis;
    return 0;
}
