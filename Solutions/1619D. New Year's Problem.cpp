#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll m, n; cin >> m >> n;
        vector<ll> colMax(n, 0);
        ll bestSecond = 0;
        for(ll i = 0; i < m; i++){
            ll mx1 = 0, mx2 = 0;
            for(ll j = 0; j < n; j++){
                ll x; cin >> x;
                if(x > colMax[j]){
                    colMax[j] = x;
                }
                if(x >= mx1){
                    mx2 = mx1;
                    mx1 = x;
                }else if(x > mx2){
                    mx2 = x;
                }
            }
            if(mx2 > bestSecond){
                bestSecond = mx2;
            }
        }
        ll minCol = LLONG_MAX;
        for(ll j = 0; j < n; j++){
            if(colMax[j] < minCol){
                minCol = colMax[j];
            }
        }
        cout << min(minCol, bestSecond) << endl;
    }
    return 0;
}
