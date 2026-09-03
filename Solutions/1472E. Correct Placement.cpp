#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<array<ll, 3>> v(n);
        for(ll i = 0; i < n; i++){
            ll h, w; cin >> h >> w;
            v[i] = {min(h, w), max(h, w), i};
        }
        sort(v.begin(), v.end()); vector<ll> ans(n, -1);
        ll bestY = LLONG_MAX, bestIdx = -1, j = 0;
        for(ll i = 0; i < n; i++){
            while(j < n && v[j][0] < v[i][0]){
                if(v[j][1] < bestY){
                    bestY = v[j][1];
                    bestIdx = v[j][2];
                }
                j++;
            }
            if(bestY < v[i][1]){
                ans[v[i][2]] = bestIdx + 1;
            }
        }
        for(ll i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
