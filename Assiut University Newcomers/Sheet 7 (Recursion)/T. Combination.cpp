#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll dp[101][101];

ll comb(ll n, ll r){
    if(r > n) return 0;
    if(r == 0 || r == n) return 1;
    if(dp[n][r]) return dp[n][r];
    return dp[n][r] = comb(n - 1, r - 1) + comb(n - 1, r);
}

int main()
{
    fast;
    ll n, r; cin >> n >> r;
    cout << comb(n, r) << endl;
    return 0;
}
