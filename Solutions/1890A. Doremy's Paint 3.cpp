#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; map<ll, ll> freq;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            freq[x]++;
        }
        if(freq.size() == 1){
            cout << "Yes" << endl;
        }else if(freq.size() == 2){
            vector<ll> counts;
            for(auto& p : freq){
                counts.push_back(p.second);
            }
            if(n % 2 == 0){
                if(counts[0] == counts[1]){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }
            }else{
                ll mn = min(counts[0], counts[1]);
                ll mx = max(counts[0], counts[1]);
                if(mx - mn == 1){
                    cout << "Yes" << endl;
                }else{
                    cout << "No" << endl;
                }
            }
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
