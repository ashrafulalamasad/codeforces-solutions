#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll s, n; cin >> s >> n;
    vector<pair<ll,ll>> dragons(n);
    for(ll i = 0; i < n; i++){
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons.begin(), dragons.end());
    bool survived = true;
    for(auto dragon : dragons){
        ll strength = dragon.first, bonus = dragon.second;
        if(s > strength){
            s += bonus;
        }else{
            survived = false;
            break;
        }
    }
    cout << (survived ? "YES" : "NO") << endl;
    return 0;
}
