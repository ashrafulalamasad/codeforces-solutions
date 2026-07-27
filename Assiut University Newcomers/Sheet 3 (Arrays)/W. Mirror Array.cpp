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
    for(ll i = 0; i < n; i++){
        for(ll j = m-1; j >= 0; j--){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
