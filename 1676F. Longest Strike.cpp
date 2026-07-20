#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        map<ll, ll> freq;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            freq[x]++;
        }
        vector<ll> valid;
        for(auto &p : freq){
            if(p.second >= k) valid.push_back(p.first);
        }
        if(valid.empty()){
            cout << -1 << endl;
            continue;
        }
        ll bestL = valid[0], bestR = valid[0];
        ll curL = valid[0], curR = valid[0];
        for(ll i = 1; i < (ll)valid.size(); i++){
            if(valid[i] == curR + 1){
                curR = valid[i];
            }else{
                if(curR - curL > bestR - bestL){
                    bestL = curL;
                    bestR = curR;
                }
                curL = curR = valid[i];
            }
        }
        if(curR - curL > bestR - bestL){
            bestL = curL;
            bestR = curR;
        }
        cout << bestL << " " << bestR << endl;
    }
    return 0;
}
