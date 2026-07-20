#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    tc{
        ll n, b, a; cin >> n >> b >> a;
        ll max_a = a, ans = 0;
        for(ll i = 0; i < n; i++){
            ll s; cin >> s;
            if(s == 1){
                if(a < max_a && b > 0){
                    b--;
                    a++;
                }else if(a > 0){
                    a--;
                }else if(b > 0){
                    b--;
                }else{
                    break;
                }
            }else{
                if(a > 0){
                    a--;
                }else if(b > 0){
                    b--;
                }else{
                    break;
                }
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
