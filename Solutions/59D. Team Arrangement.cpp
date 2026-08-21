#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; ll total = 3 * n;
    vector<ll> place(total + 1);
    for(ll i = 1; i <= total; i++){
        ll x; cin >> x;
        place[x] = i;
    }
    vector<array<ll, 3>> teams(n);
    vector<ll> teamId(total + 1, 0);
    vector<ll> isCaptain(total + 1, 0);
    for(ll i = 0; i < n; i++){
        ll a, b, c; cin >> a >> b >> c;
        teams[i][0] = a;
        teams[i][1] = b;
        teams[i][2] = c;
        teamId[a] = i;
        teamId[b] = i;
        teamId[c] = i;
        ll cap = a;
        if(place[b] < place[cap]){
            cap = b;
        }
        if(place[c] < place[cap]){
            cap = c;
        }
        isCaptain[cap] = 1;
    }
    ll k; cin >> k;
    if(!isCaptain[k]){
        for(ll i = 1; i <= total; i++){
            if(i != k){
                cout << i << " ";
            }
        }
        cout << endl;
        return 0;
    }
    ll idx = teamId[k];
    ll chosen1 = 0;
    ll chosen2 = 0;
    for(ll i = 0; i < 3; i++){
        ll x = teams[idx][i];
        if(x == k){
            continue;
        }
        if(chosen1 == 0){
            chosen1 = x;
        }else{
            chosen2 = x;
        }
    }
    ll limit = max(chosen1, chosen2);
    for(ll x = 1; x <= limit; x++){
        if(x == k){
            continue;
        }
        if(teamId[x] < idx || x == chosen1 || x == chosen2){
            cout << x << " ";
        }
    }
    for(ll x = 1; x <= total; x++){
        if(x == k){
            continue;
        }
        if(x <= limit && (teamId[x] < idx || x == chosen1 || x == chosen2)){
            continue;
        }
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
