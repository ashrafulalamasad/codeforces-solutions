#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, r = 0; cin >> n; vector<ll> p(n), ans;
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++){
            ll curR = r + 1;
            if(curR >= n){
                curR = n - 1;
            }
            ll curI = i + 1;
            if(curI >= n) curI = n - 1;
            if(p[curR] <= p[curI]) r = i;
        }
        for(ll i = r + 1; i < n; i++){
            ans.push_back(p[i]);
        }
        ans.push_back(p[r]);
        for(ll i = r - 1; i >= 0; i--){
            if(p[i] > p[0]){
                ans.push_back(p[i]);
            }else{
                for(ll j = 0; j <= i; j++){
                    ans.push_back(p[j]);
                }
                break;
            }
            if(i == 0) break;
        }
        for(ll i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
