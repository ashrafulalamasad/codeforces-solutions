#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll x;
    for(ll i=0; i<5; i++){
        for(ll j=0; j<5; j++){
            cin >> x;
            if(x==1){
                cout << abs(i-2) + abs(j-2) << endl;
            }
        }
    }
    return 0;
}
