#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, q; cin >> n >> q;
        for(ll i = 1; i < n; i++){
            cout << i << " " << i + 1 << endl;
        }
        ll parent = n - 1;
        for(ll i = 0; i < q; i++){
            ll d; cin >> d;
            if(parent == d){
                cout << -1 << " " << -1 << " " << -1 << endl;
            }else{
                cout << n << " " << parent << " " << d << endl;
                parent = d;
            }
        }
    }
    return 0;
}
