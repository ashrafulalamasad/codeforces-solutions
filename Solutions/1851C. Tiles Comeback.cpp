#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, k; cin >> n >> k; vector<ll> c(n);
        for(ll i = 0; i < n; i++) cin >> c[i];
        if(c[0] == c[n - 1]){
            ll cnt = 0;
            for(ll i = 0; i < n; i++) if(c[i] == c[0]) cnt++;
            if(cnt >= k) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else{
            ll need = k, left = -1;
            for(ll i = 0; i < n; i++){
                if(c[i] == c[0]) need--;
                if(need == 0){
                    left = i; break;
                }
            }
            need = k; ll right = -1;
            for(ll i = n - 1; i >= 0; i--){
                if(c[i] == c[n - 1]) need--;
                if(need == 0){
                    right = i; break;
                }
            }
            if(left != -1 && right != -1 && left < right) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
