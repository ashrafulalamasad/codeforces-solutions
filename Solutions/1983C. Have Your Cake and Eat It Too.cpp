#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n;
        vector<vector<ll>> v(3, vector<ll>(n));
        for(ll i = 0; i < n; i++) cin >> v[0][i];
        for(ll i = 0; i < n; i++) cin >> v[1][i];
        for(ll i = 0; i < n; i++) cin >> v[2][i];
        ll tot = 0;
        for(ll i = 0; i < n; i++) tot = tot + v[0][i];
        ll need = (tot + 2) / 3;
        vector<ll> ord = {0, 1, 2};
        vector<ll> ansL(3, -1), ansR(3, -1);
        ll found = 0;
        do{
            ll x = ord[0], y = ord[1], z = ord[2];
            ll sum = 0, r1 = -1, r2 = -1;
            for(ll i = 0; i < n; i++){
                sum = sum + v[x][i];
                if(sum >= need){
                    r1 = i;
                    break;
                }
            }
            if(r1 == -1) continue;
            if(r1 + 2 >= n) continue;
            sum = 0;
            for(ll i = r1 + 1; i < n; i++){
                sum = sum + v[y][i];
                if(sum >= need){
                    r2 = i;
                    break;
                }
            }
            if(r2 == -1) continue;
            if(r2 + 1 >= n) continue;
            sum = 0;
            for(ll i = r2 + 1; i < n; i++) sum = sum + v[z][i];
            if(sum < need) continue;
            ansL[x] = 1;
            ansR[x] = r1 + 1;
            ansL[y] = r1 + 2;
            ansR[y] = r2 + 1;
            ansL[z] = r2 + 2;
            ansR[z] = n;
            found = 1;
            break;
        }while(next_permutation(ord.begin(), ord.end()));
        if(found == 0) cout << -1 << endl;
        else cout << ansL[0] << " " << ansR[0] << " " << ansL[1] << " " << ansR[1] << " " << ansL[2] << " " << ansR[2] << endl;
    }
    return 0;
}
