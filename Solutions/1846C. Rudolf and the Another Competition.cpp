#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, h; cin >> n >> m >> h;
        vector<ll> pts(n, 0), pen(n, 0);
        for(ll i = 0; i < n; i++){
            vector<ll> t(m);
            for(ll j = 0; j < m; j++) cin >> t[j];
            sort(t.begin(), t.end());
            ll sum = 0, cur = 0;
            for(ll j = 0; j < m; j++){
                if(sum + t[j] > h){
                    break;
                }
                sum = sum + t[j];
                cur = cur + sum;
                pts[i]++;
            }
            pen[i] = cur;
        }
        ll rank = 1;
        for(ll i = 1; i < n; i++){
            if(pts[i] > pts[0] || (pts[i] == pts[0] && pen[i] < pen[0])){
                rank++;
            }
        }
        cout << rank << endl;
    }
    return 0;
}
