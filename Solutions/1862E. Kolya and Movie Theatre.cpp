#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, m, d; cin >> n >> m >> d;
        priority_queue<ll, vector<ll>, greater<ll>> top;
        ll limit = m - 1, sum = 0, ans = 0;
        for(ll i = 1; i <= n; i++){
            ll x; cin >> x;
            if(x > 0){
                ans = max(ans, x + sum - d * i);
            }
            if(x > 0 && limit > 0){
                if((ll)top.size() < limit){
                    top.push(x);
                    sum += x;
                }else{
                    if(x > top.top()){
                        sum -= top.top();
                        top.pop();
                        top.push(x);
                        sum += x;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
