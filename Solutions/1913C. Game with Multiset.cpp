#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll m; cin >> m; vector<ll> count(32, 0);
    while(m--){
        ll type, value; cin >> type >> value;
        if(type == 1){
            count[value]++;
        }else{
            ll target = value;
            vector<ll> current = count;
            bool possible = true;
            for(ll i = 0; i < 31; i++){
                if(target & (1LL << i)){
                    if(current[i] == 0){
                        possible = false;
                        break;
                    }
                    current[i]--;
                }
                current[i + 1] += current[i] / 2;
            }
            if(possible) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
