#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, sum = 0, ans = 0; cin >> n;
        set<ll> prefix; prefix.insert(0);
        for(ll i = 0; i < n; i++){
            ll value; cin >> value;
            sum += value;
            if(prefix.count(sum)){
                ans++;
                prefix.clear();
                prefix.insert(0);
                sum = 0;
            }else{
                prefix.insert(sum);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
