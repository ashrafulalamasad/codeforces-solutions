#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k;
        ll gold = 0, cnt = 0;
        for(ll i = 0; i < n; i++){
            ll a; cin >> a;
            if(a >= k){
                gold += a;
            }else if(a == 0 && gold > 0){
                gold--;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
