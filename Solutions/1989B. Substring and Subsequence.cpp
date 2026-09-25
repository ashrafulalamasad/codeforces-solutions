#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        string a, b; cin >> a >> b;
        ll n = (ll)a.size(), m = (ll)b.size(), best = 0;
        for(ll i = 0; i < m; i++){
            ll j = i, cnt = 0;
            for(ll k = 0; k < n; k++){
                if(j < m && a[k] == b[j]){
                    j++;
                    cnt++;
                }
            }
            best = max(best, cnt);
        }
        cout << n + m - best << endl;
    }
    return 0;
}
