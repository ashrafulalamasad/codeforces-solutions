#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, m; cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    ll top = 0, bottom = n - 1, left = 0, right = m - 1;
    vector<ll> ans;
    while(top <= bottom && left <= right){
        for(ll j = left; j <= right; j++) ans.push_back(a[top][j]);
        top++;
        for(ll i = top; i <= bottom; i++) ans.push_back(a[i][right]);
        right--;
        if(top <= bottom){
            for(ll j = right; j >= left; j--) ans.push_back(a[bottom][j]);
            bottom--;
        }
        if(left <= right){
            for(ll i = bottom; i >= top; i--) ans.push_back(a[i][left]);
            left++;
        }
    }
    for(ll x : ans) cout << x << ' ';
    cout << endl;
    return 0;
}
