#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> x(n), y(n); map<ll,ll> cnt;
    for(ll i=0; i<n; i++){ cin >> x[i] >> y[i]; cnt[x[i]]++; }
    for(ll i=0; i<n; i++){
        ll away_in_home = cnt[y[i]];
        ll home_games = (n-1) + away_in_home;
        ll away_games = (n-1) - away_in_home;
        cout << home_games << " " << away_games << "\n";
    }
    return 0;
}
