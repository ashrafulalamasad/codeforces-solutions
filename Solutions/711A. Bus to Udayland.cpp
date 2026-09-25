#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n; cin >> n; vector<string> bus(n);
    for(ll i = 0; i < n; i++) cin >> bus[i];
    bool found = false;
    for(ll i = 0; i < n; i++){
        if(bus[i][0] == 'O' && bus[i][1] == 'O'){
            bus[i][0] = '+';
            bus[i][1] = '+';
            found = true;
            break;
        }
        if(bus[i][3] == 'O' && bus[i][4] == 'O'){
            bus[i][3] = '+';
            bus[i][4] = '+';
            found = true;
            break;
        }
    }
    if(!found) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        for(ll i = 0; i < n; i++) cout << bus[i] << endl;
    }
    return 0;
}
