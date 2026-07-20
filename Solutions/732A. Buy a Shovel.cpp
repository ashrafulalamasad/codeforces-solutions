#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k, r; cin >> k >> r;
    for(ll n = 1; ; n++){
        ll total = n * k;
        if(total % 10 == 0 || total % 10 == r){
            cout << n << endl;
            break;
        }
    }
    return 0;
}
