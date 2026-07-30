#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    ll freePolice = 0, untreated = 0;
    for(ll i = 0; i < n; i++){
        ll x; cin >> x;
        if(x == -1){
            if(freePolice > 0) freePolice--;
            else untreated++;
        }
        else freePolice += x;
    }
    cout << untreated << endl;
    return 0;
}
