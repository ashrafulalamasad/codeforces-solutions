#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll num; cin >> num;
    for(ll i = 0; i < num; i++){
        ll val = 1;
        for(ll j = 0; j <= i; j++){
            if(j) cout << " ";
            cout << val;
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
