#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string r; cin >> r;
        ll n = r.size(), ans = 0;
        if(r[0] == 'u'){
            ans++;
            r[0] = 's';
        }
        if(r[n - 1] == 'u'){
            ans++;
            r[n - 1] = 's';
        }
        ll cur = 0;
        for(ll i = 0; i < n; i++){
            if(r[i] == 'u') cur++;
            else{
                ans = ans + cur / 2;
                cur = 0;
            }
        }
        ans = ans + cur / 2;
        cout << ans << endl;
    }
    return 0;
}
