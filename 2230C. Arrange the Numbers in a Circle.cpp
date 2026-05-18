#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> arr(n + 1);
        for(ll i = 1; i <= n; i++) cin >> arr[i];
        ll sumbig = 0;
        ll ones = 0;
        ll blocks = 0;
        ll kinds = 0;
        for(ll i = 1; i <= n; i++){
            if(arr[i] == 1){
                ones++;
            }else{
                sumbig += arr[i];
                blocks += arr[i] / 2;
                kinds++;
            }
        }
        ll ans = 0;
        if(kinds == 0){
            ans = 0;
        }else{
            ll slots = blocks;
            if(kinds > 1) slots = blocks - kinds;
            ans = sumbig + min(ones, slots);
            if(ans < 3) ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}
