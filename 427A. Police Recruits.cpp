#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n;
    vector<ll> events(n);
    for(ll i = 0; i < n; i++) cin >> events[i];
    ll free_officers = 0, untreated_crimes = 0;
    for(ll e : events){
        if(e == -1){
            if(free_officers > 0){
                free_officers--;
            }else{
                untreated_crimes++;
            }
        }else{
            free_officers += e;
        }
    }
    cout << untreated_crimes << endl;
    return 0;
}
