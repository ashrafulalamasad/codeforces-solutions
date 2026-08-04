#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll k; cin >> k; vector<ll> d(k);
    for(ll i = 0; i < k; i++) cin >> d[i];
    bool has0 = false, has100 = false;
    ll aVal = -1, bVal = -1, cVal = -1;
    for(ll i = 0; i < k; i++){
        ll v = d[i];
        if(v == 0){
            has0 = true;
            continue;
        }
        if(v == 100){
            has100 = true;
            continue;
        }
        ll tens = v/10, units = v%10;
        if(tens == 0 && units != 0){
            if(aVal == -1) aVal = v;
        }
        else if(units == 0 && tens != 0){
            if(bVal == -1) bVal = v;
        }
        else{
            if(cVal == -1) cVal = v;
        }
    }
    vector<ll> res;
    if(has0) res.push_back(0);
    if(has100) res.push_back(100);
    if(aVal != -1 && bVal != -1){
        res.push_back(aVal);
        res.push_back(bVal);
    }else if(aVal != -1){
        res.push_back(aVal);
    }else if(bVal != -1){
        res.push_back(bVal);
    }else if(cVal != -1){
        res.push_back(cVal);
    }
    cout << res.size() << endl;
    for(ll i = 0; i < (ll)res.size(); i++) cout << res[i] << " ";
    cout << endl;
}
