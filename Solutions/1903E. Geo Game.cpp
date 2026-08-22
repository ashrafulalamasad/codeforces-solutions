#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n = -1; cin >> n;
        if(n == -1) return 0;
        ll sx, sy; cin >> sx >> sy;
        vector<ll> good, bad;
        vector<char> used(n + 1, 0);
        ll start = (sx + sy) % 2;
        for(ll i = 1; i <= n; i++){
            ll x, y; cin >> x >> y;
            if((x + y) % 2 == start){
                good.push_back(i);
            }else{
                bad.push_back(i);
            }
        }
        ll mySecond = 0;
        if((ll)good.size() >= (ll)bad.size()){
            cout << "First" << endl;
            mySecond = 0;
        }else{
            cout << "Second" << endl;
            mySecond = 1;
        }
        auto get_index = [&](vector<ll>& v) -> ll {
            while(!v.empty() && used[v.back()]){
                v.pop_back();
            }
            if(v.empty()){
                return -1;
            }
            ll idx = v.back();
            v.pop_back();
            return idx;
        };
        for(ll move = 0; move < n; move++){
            if(move % 2 == mySecond){
                ll idx = -1;
                if(mySecond == 0){
                    idx = get_index(bad);
                    if(idx == -1){
                        idx = get_index(good);
                    }
                }else{
                    idx = get_index(good);
                    if(idx == -1){
                        idx = get_index(bad);
                    }
                }
                if(idx == -1){
                    return 0;
                }
                used[idx] = 1;
                cout << idx << endl;
            }else{
                ll idx = -1; cin >> idx;
                if(idx == -1){
                    return 0;
                }
                used[idx] = 1;
            }
        }
    }
    return 0;
}
