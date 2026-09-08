#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        ll zeros = 0, negs = 0;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x == 0) zeros++;
            else if(x == -1) negs++;
        }
        cout << zeros + (negs % 2) * 2 << endl;
    }
    return 0;
}
