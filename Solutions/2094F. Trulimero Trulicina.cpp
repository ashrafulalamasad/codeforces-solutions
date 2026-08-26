#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < m; j++){
                ll val;
                if(m % k != 0){
                    val = (i * m + j) % k + 1;
                }else{
                    val = (i + j) % k + 1;
                }
                if(j > 0){
                    cout << ' ';
                }
                cout << val;
            }
            cout << endl;
        }
    }
    return 0;
}
