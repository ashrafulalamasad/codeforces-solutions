#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, ans = 0; cin >> n;
        priority_queue<ll> pq;
        for(ll i = 0; i < n; i++){
            ll x; cin >> x;
            if(x > 0){
                pq.push(x);
            }else{
                if(!pq.empty()){
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
