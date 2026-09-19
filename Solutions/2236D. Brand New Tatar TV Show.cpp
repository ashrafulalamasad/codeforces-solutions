#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> b(n);
        for(ll i = 0; i < n; i++) cin >> b[i];
        sort(b.begin(), b.end()); vector<ll> vals, cnts;
        for(ll i = 0; i < n; i++){
            if(i == 0 || b[i] != b[i - 1]){
                vals.push_back(b[i]);
                cnts.push_back(1);
            }else{
                cnts.back()++;
            }
        }
        ll win = 0, done = 0;
        while(vals.size() > 0 && done == 0){
            ll m = vals.size();
            if(cnts[m - 1] % 2 == 0){
                win = 1; done = 1;
            }else if(m == 1){
                win = 0; done = 1;
            }else if(vals[m - 1] - vals[m - 2] <= k){
                win = 1; done = 1;
            }else{
                vals.pop_back(); cnts.pop_back();
            }
        }
        if(win){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
