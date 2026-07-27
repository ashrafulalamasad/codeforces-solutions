#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m; vector<vector<ll>> arr(n, vector<ll>(m));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    ll x; cin >> x;
    bool found = false;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(arr[i][j] == x){
                found = true;
                break;
            }
        }
        if(found) break;
    }
    if(found) cout << "will not take number" << endl;
    else cout << "will take number" << endl;
    return 0;
}
