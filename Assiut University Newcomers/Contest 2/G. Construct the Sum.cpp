#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, s; cin >> n >> s;
        ll total = n * (n + 1) / 2;
        if(s > total){
            cout << -1 << endl;
            continue;
        }
        for(ll i = n; i >= 1; i--){
            if(s >= i){
                cout << i << ' ';
                s -= i;
            }
        }
        cout << endl;
    }
    return 0;
}
