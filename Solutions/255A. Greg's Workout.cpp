#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll chest = 0, biceps = 0, back = 0;
    for(ll i = 0; i < n; i++){
        if(i % 3 == 0) chest += a[i];
        else if(i % 3 == 1) biceps += a[i];
        else back += a[i];
    }
    if(chest > biceps && chest > back) cout << "chest" << endl;
    else if(biceps > chest && biceps > back) cout << "biceps" << endl;
    else cout << "back" << endl;
    return 0;
}
