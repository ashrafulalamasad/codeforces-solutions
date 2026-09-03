#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n, 1));
    for(ll i = 1; i < n; i++){
        for(ll j = 1; j < n; j++){
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    cout << a[n - 1][n - 1] << endl;
    return 0;
}
