#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;
    tc{
        ll n; cin >> n; map<ll, ll> cnt;
        vector<vector<ll>> seqs(n, vector<ll>(n - 1));
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n - 1; j++){
                cin >> seqs[i][j];
                if(j == 0){
                    cnt[seqs[i][0]]++;
                }
            }
        }
        ll first = -1;
        for(auto& p : cnt){
            if(p.second == n - 1){
                first = p.first;
                break;
            }
        }
        ll idx = 0;
        for(ll i = 0; i < n; i++){
            if(seqs[i][0] != first){
                idx = i;
                break;
            }
        }
        cout << first;
        for(ll j = 0; j < n - 1; j++){
            cout << " " << seqs[idx][j];
        }
        cout << endl;
    }
    return 0;
}
