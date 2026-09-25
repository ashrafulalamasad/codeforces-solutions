#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n; cin >> n; vector<ll> p(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        ll l = 0, r = n - 1;
        string ans = "";
        for(ll i = 0; i < n; i++){
            if(i % 2 == 0){
                if(p[l] < p[r]){
                    ans += 'L';
                    l++;
                }else{
                    ans += 'R';
                    r--;
                }
            }else{
                if(p[l] > p[r]){
                    ans += 'L';
                    l++;
                }else{
                    ans += 'R';
                    r--;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
