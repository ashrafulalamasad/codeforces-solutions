#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll infinity = 1e18;

int main()
{
    fast;
    tc{
        ll n, m, k; cin >> n >> m >> k;
        string r; cin >> r; r = "L" + r + "L";
        vector<ll> surface(n + 2, infinity), water(n + 2, infinity);
        surface[0] = 0;
        for(ll i = 1; i <= n + 1; i++){
            if(r[i] == 'C') continue;
            for(ll j = max(0LL, i - m); j < i; j++){
                if(surface[j] != infinity && r[i] != 'W'){
                    surface[i] = min(surface[i], surface[j]);
                }
            }
            if(water[i - 1] != infinity){
                if(r[i] == 'W') water[i] = min(water[i], water[i - 1] + 1);
                else surface[i] = min(surface[i], water[i - 1] + 1);
            }
            if(r[i] == 'W'){
                for(ll j = max(0LL, i - m); j < i; j++){
                    if(surface[j] != infinity) water[i] = min(water[i], surface[j]);
                }
            }
            if(water[i] > k) water[i] = infinity;
            if(surface[i] > k) surface[i] = infinity;
        }
        cout << (surface[n + 1] != infinity ? "YES" : "NO") << endl;
    }
    return 0;
}
