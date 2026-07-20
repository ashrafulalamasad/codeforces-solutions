#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, l; cin >> n >> l;
    vector<ll> lanterns(n);
    for(ll i = 0; i < n; i++) cin >> lanterns[i];
    sort(lanterns.begin(), lanterns.end());
    ll max_distance = 0;
    for(ll i = 1; i < n; i++){
        ll gap = lanterns[i] - lanterns[i-1];
        if(gap > max_distance){
            max_distance = gap;
        }
    }
    double radius = max_distance / 2.0;
    if(lanterns[0] > radius) radius = lanterns[0];
    if((l - lanterns[n-1]) > radius) radius = l - lanterns[n-1];
    cout << fixed << setprecision(10) << radius << endl;
    return 0;
}
