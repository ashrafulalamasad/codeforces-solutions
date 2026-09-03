#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    vector<ll> pw(19, 1);
    for(ll i = 1; i < 19; i++) pw[i] = pw[i - 1] * 10;
    tc{
        ll n; cin >> n; vector<ll> res;
        for(ll k = 1; k <= 18; k++){
            ll d = pw[k] + 1;
            if(d <= n && n % d == 0){
                res.push_back(n / d);
            }
        }
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        if(!res.empty()){
            for(ll i = 0; i < (ll)res.size(); i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
