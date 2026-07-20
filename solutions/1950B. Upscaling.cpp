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
        for(ll i = 0; i < 2 * n; ++i){
            for(ll j = 0; j < 2 * n; ++j){
                if((i / 2 + j / 2) % 2 == 0) cout << "#";
                else cout << ".";
            }
            cout << endl;
        }
    }
    return 0;
}
